BitsCrypter Command Line Utility
Version: 1.0
Developed By: TriDev
Licensed To: Guest

Usage: bitscrypter [OPTIONS]...  [FILENAME]... 
Encrypt and Decrypt a file. 
Or Create A Key File(for later use in encryption and decryption).

Options And Arguments (According TO Environment Values):
1 -e [filelocation]              : Encrypts A File And Create A Key
2 -d [filelocaton] [keylocation] : Decrypts The File Using The Sppecified Key
3 -k [filename]                  : Creates The Key (With The Sppecified Name)
4 --password Password            : Encrypt Using The Given Text Password
5 --help                         : Prints This Content


--encrypt [options] [filelocation] 
Usage: bitscrypter --encrypt [OPTIONS] [FILENAME]
Options: 
6 -k [keylocation]               : Specify The Key To Use In Encryption Of File
7 --deloriginal                  : Delete The Original File (File In Use)

Define Level Of Encryption:
Usage: bitscrypter --encrypt --high-risk [OPTION] [FILENAME]
       bitscrypter -e --low-risk [OPTION] [FILENAME]
Options:
8 --high-risk                    : Encypts The File With High Level Encryption
9 --low-risk                     : Encrypt The File With Low Level Encryption 



