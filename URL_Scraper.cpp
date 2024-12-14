#include <iostream>
#include <regex>
#include <cstdlib>
#include <string>
using namespace std;

int main() {

  string url;
  cout << "Please Type the URL of the Website you'd Like to scan: ";
  getline(cin, url);
  string command = "wget -q -O - " + url;
  
  FILE* website = popen(command.c_str(), "r");
  
  if (!website) {
    cout<<"Task failed, try a different URL"<<endl;
    return 1;
  }
  
  char buffer[1024];
  string text = "";
  while (fgets(buffer, sizeof(buffer), website) != nullptr) {
    text += buffer;
  }

  //REGEX LINES
  regex SiteLinkRegex(R"([^\r]<a href="https?:\/\/[\w.\/-]+)");
  regex DomainRegex(R"(http(s)?:\/\/(www\.)?([^\/]+)(/.*)?)");
  regex ImageLinkRegex(R"([^\r]<img src="(images)?(https?:\/\/)?[\w.\/-]+)");
  regex ImageTextRegex(R"(alt="[\w -\.\/]+)");
  regex ImageTextClean(R"(alt=)");
  smatch match;
  
  auto begin = text.cbegin();
  auto end = text.cend();
  
  
  while(regex_search(begin, end, match, SiteLinkRegex)) {
    string temp = match[0];
    string link = temp.substr(10);    
    string domain =regex_replace(link, DomainRegex, "$3");
    
    cout<< "Site URL: " << link << endl << "Text: " << domain << endl;
    
    begin = match.suffix().first;
  }
  
  begin = text.cbegin();
  
  while (regex_search(begin, end, match, ImageLinkRegex)) {
    string temp = match[0];
    string link = temp.substr(11);
    temp = regex_search(begin, end, match, ImageTextRegex);
    string desc = regex_replace(temp, ImageTextClean, "$3");
    
    
    cout<< "Image URL: " << link << endl << "Alt Text: " << desc << endl;
    
    begin = match.suffix().first;
  }
  
  
  pclose(website);
  return 0;
}

