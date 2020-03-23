# BitsCrypter Command Line Utility
## Version: 1.0
## Developed By: TriDev
## Licensed To: 

### Usage: bitscrypter [OPTIONS]...  [FILENAME]... 
### Encrypt and Decrypt a file. 
### Or Create A Key File(for later use in encryption and decryption).

#### Options And Arguments (According TO Environment Values):

-e [filelocation]              : Encrypts A File And Create A Key

-d [filelocaton] [keylocation] : Decrypts The File Using The Sppecified Key

-k [filename]                  : Creates The Key (With The Sppecified Name)

--password Password            : Encrypt Using The Given Text Password

--help                         : Prints This Content


--encrypt [options] [filelocation] 

Usage: bitscrypter --encrypt [OPTIONS] [FILENAME]

Options: 

-k [keylocation]               : Specify The Key To Use In Encryption Of File

--deloriginal                  : Delete The Original File (File In Use)



Define Level Of Encryption:

Usage: bitscrypter --encrypt --high-risk [OPTION] [FILENAME]

bitscrypter -e --low-risk [OPTION] [FILENAME]


Options:

--high-risk                    : Encypts The File With High Level Encryption

--low-risk                     : Encrypt The File With Low Level Encryption 



### Tricky Developer(TriDev) -- vibhuti019
