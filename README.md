# URL Scraper

## Overview
This project is a simple URL scraper implemented in C++. The program scans a user-provided website URL, extracts hyperlinks from its HTML content, and displays the full URL along with the corresponding domain names. It utilizes the `wget` command-line tool to fetch the webpage content and `regex` to parse and process the data.

---

## Features
- **User Input**: Prompts the user to enter the URL of the website they want to scan.
- **Webpage Retrieval**: Uses the `wget` command to fetch the HTML content of the website.
- **Hyperlink Extraction**: Extracts all valid URLs from the webpage using regular expressions.
- **Domain Parsing**: Processes each URL to display the corresponding domain name.

---

## How It Works
1. **Input**: The user provides the URL of a website they want to scan.
2. **Fetching Webpage**:
   - The program constructs a command using `wget` to fetch the HTML content of the specified URL.
   - The HTML content is read and stored in a string.
3. **Regex Matching**:
   - A regex pattern is used to identify hyperlinks in the HTML content.
   - Another regex extracts the domain name from the full URL.
4. **Output**:
   - For each extracted hyperlink, the program displays:
     - The full URL.
     - The domain name.

---

## Example Usage

**Input**
``` 
Please Type the URL of the Website you'd Like to scan: https://www.mst.edu/
```

**Output**
```
Site URL: https://give.mst.edu/
Text: give.mst.edu
Site URL: https://news.mst.edu/
Text: news.mst.edu
Site URL: https://calendar.mst.edu/
Text: calendar.mst.edu
Site URL: https://people.mst.edu/
Text: people.mst.edu
Site URL: https://www.mst.edu/map/
Text: mst.edu
Site URL: https://www.mst.edu/
Text: mst.edu
Site URL: https://futurestudents.mst.edu/admissions/
Text: futurestudents.mst.edu
Site URL: https://visit.mst.edu/
Text: visit.mst.edu
Site URL: https://futurestudents.mst.edu/request-info/
Text: futurestudents.mst.edu
Site URL: https://futurestudents.mst.edu/
Text: futurestudents.mst.edu
Site URL: https://www.mst.edu/students
Text: mst.edu
Site URL: https://www.mineralumni.com/
Text: mineralumni.com
Site URL: https://www.mst.edu/facstaff/
Text: mst.edu
Site URL: https://futurestudents.mst.edu/admissions/
Text: futurestudents.mst.edu
Site URL: https://visit.mst.edu/
Text: visit.mst.edu
Site URL: https://futurestudents.mst.edu/request-info/
Text: futurestudents.mst.edu
Site URL: https://futurestudents.mst.edu/
Text: futurestudents.mst.edu
Site URL: https://www.mst.edu/students
Text: mst.edu
Site URL: https://www.mineralumni.com/
Text: mineralumni.com
Site URL: https://www.mst.edu/facstaff/
Text: mst.edu
Site URL: https://give.mst.edu/
Text: give.mst.edu
Site URL: https://news.mst.edu/
Text: news.mst.edu
Site URL: https://calendar.mst.edu/
Text: calendar.mst.edu
Site URL: https://people.mst.edu/
Text: people.mst.edu
Site URL: https://www.mst.edu/map/
Text: mst.edu
Site URL: https://www.google.com/maps/place/Missouri
Text: google.com
Site URL: https://www.mst.edu/about/academics
Text: mst.edu
Site URL: https://sfa.mst.edu
Text: sfa.mst.edu
Site URL: https://futurestudents.mst.edu
Text: futurestudents.mst.edu
Site URL: https://www.mst.edu/about/campuslife
Text: mst.edu
Site URL: https://www.minerathletics.com
Text: minerathletics.com
Site URL: https://research.mst.edu/
Text: research.mst.edu
Site URL: https://community.mst.edu
Text: community.mst.edu
Site URL: https://www.mst.edu/about/
Text: mst.edu
Site URL: https://www.mst.edu/about/
Text: mst.edu
Site URL: https://news.mst.edu/
Text: news.mst.edu
Site URL: https://www.mst.edu/about/academics
Text: mst.edu
Site URL: https://sfa.mst.edu
Text: sfa.mst.edu
Site URL: https://futurestudents.mst.edu
Text: futurestudents.mst.edu
Site URL: https://www.mst.edu/about/campuslife
Text: mst.edu
Site URL: https://www.minerathletics.com
Text: minerathletics.com
Site URL: https://research.mst.edu/
Text: research.mst.edu
Site URL: https://community.mst.edu
Text: community.mst.edu
Site URL: https://www.mst.edu/about/
Text: mst.edu
Site URL: https://www.google.com/maps/place/Missouri
Text: google.com
Site URL: https://www.google.com/maps/dir//37.9543231
Text: google.com
Site URL: https://jobs.mst.edu/
Text: jobs.mst.edu
Site URL: https://accreditation.mst.edu/
Text: accreditation.mst.edu
Site URL: https://police.mst.edu
Text: police.mst.edu
Site URL: https://brand.mst.edu/
Text: brand.mst.edu
Site URL: https://alert.mst.edu/
Text: alert.mst.edu
Site URL: https://giving.mst.edu/
Text: giving.mst.edu
Site URL: https://saat.mst.edu/
Text: saat.mst.edu
Site URL: https://marketing.mst.edu/web/social/social-media-directory/
Text: marketing.mst.edu
Site URL: https://www.facebook.com/MissouriSandT
Text: facebook.com
Site URL: https://www.instagram.com/missourisandt/
Text: instagram.com
Site URL: https://www.linkedin.com/edu/missouri-university-of-science-and-technology-42027
Text: linkedin.com
Site URL: https://twitter.com/MissouriSandT
Text: twitter.com
Site URL: https://www.youtube.com/user/MissouriSandT
Text: youtube.com
Site URL: https://go.mst.edu/discord
Text: go.mst.edu
Site URL: https://www.tiktok.com/
Text: tiktok.com
Site URL: https://marketing.mst.edu/web/social/social-media-directory/
Text: marketing.mst.edu
Site URL: https://equity.mst.edu/
Text: equity.mst.edu
Site URL: https://equity.mst.edu/
Text: equity.mst.edu
Site URL: https://equity.mst.edu/
Text: equity.mst.edu
Site URL: https://www.umsystem.edu/curators
Text: umsystem.edu
Site URL: https://www.umsystem.edu
Text: umsystem.edu
Site URL: https://www.mst.edu/privacy-policy/
Text: mst.edu
Site URL: https://www.mst.edu/consumer-information/
Text: mst.edu
Site URL: https://t4.mst.edu/
Text: t4.mst.edu
```
