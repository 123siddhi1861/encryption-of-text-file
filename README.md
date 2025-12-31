🔐 Password-Protected Note Encryption Tool (C)

This project is a command-line based file encryption and decryption tool written in C.
It uses a simple XOR encryption technique along with a password to securely convert readable text files into unreadable encrypted files and restore them back when the correct password is provided.

The project is designed to strengthen core C programming concepts such as file handling, command-line arguments, enums, and modular programming.

✨ Features

Encrypts plain text files using XOR-based password encryption

Decrypts encrypted files back to original content using the same password

Supports command-line options for encryption (-e) and decryption (-d)

Uses enums for clean and readable program flow

Modular file structure with separate source and header files

Proper error handling for invalid input and file access

🛠️ Technologies Used

C Programming Language

File Handling (fopen, fgetc, fputc, fclose)

Command-Line Arguments

XOR Encryption Logic

📂 Project Structure
main.c        - Handles command-line arguments and program flow
encrypt.c     - Contains encryption and decryption logic
encrypt.h     - Function declarations
types.h       - Enum definitions for status and operation modes
input.txt     - Sample plaintext file
encrypted.enc - Encrypted output file
output.txt    - Decrypted output file

▶️ How to Run

Compile the program:

cc main.c encrypt.c -o encrypt_tool


Encrypt a file:

./encrypt_tool input.txt -e encrypted.enc


Decrypt a file:

./encrypt_tool encrypted.enc -d output.txt

🎯 Learning Outcomes

Understanding XOR-based encryption and decryption

Hands-on experience with file handling in C

Better understanding of enums and modular programming

Improved debugging skills for segmentation faults and runtime errors

🚀 Future Enhancements

Stronger encryption algorithms (AES, hashing)

Dynamic password input instead of hardcoded password

File integrity verification

Improved user interface
