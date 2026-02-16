# REDLOG ANALYZER (v1.0)

🛡️ **Log Analysis Tool (Educational)**

---

## Description

REDLOG ANALYZER is a simple educational C++ tool for analyzing log files.  
It reads a log file and counts occurrences of important commands such as:

- `sudo`
- `su`
- `root`
- `wget` / `curl` (downloads)
- `apt install` (software installation)

It is designed to teach **file reading, loops, conditionals, and event counting in text**, in a practical way, making it your first step in learning cybersecurity.

---

## How to Run

1. Make sure you have **g++** installed.  
2. Place the log file in the same folder as the tool.  
3. Open Terminal and navigate to the folder:
   ```bash
   cd /path/to/your/tool
Compile the program:

bash
Copy code
g++ REDLOG_ANALYZER.cpp -o REDLOG_ANALYZER
Run it:

bash
Copy code
./REDLOG_ANALYZER
Enter the log file name when prompted.

Example Output
text
Copy code
===========================
===== REDLOG ANALYZER =====
===========================
write the name file : auth.log
this file is here and read this file :)

===== REDLOG ANALYZER REPORT =====
SUDO       : 3
SU         : 0
ROOT       : 0
DOWNLOAD   : 2
INSTALL    : 1
Notes
Current version is educational; it uses simple find() searches.

Case-insensitive search is not implemented yet.

Do not use this tool on real systems except for educational/legal purposes.

Future Improvements
Case-insensitive search for better accuracy.

Tokenization using stringstream to avoid false counts like su inside sudo.

Track users and timestamps for commands.

Better report formatting with tables or lines.

Optimize for large files with buffers or advanced techniques.

