# BitsCrypter Command Line Utility
## Version: 1.0
## Developed By: TriDev
## Licensed To: 

**Encrypt and Decrypt a file.**
**Or Create A Key File(for later use in encryption and decryption)**.
 
 
 
 **Usage: bitscrypter (OPTIONS)...  (FILENAME)...**  
 **Options And Arguments (According TO Environment Values):**

-e (file_location)               : Encrypts A File And Create A Key

-d (file_locaton) (key_location) : Decrypts The File Using The Sppecified Key

-k (file_name)                   : Creates The Key (With The Sppecified Name)

--password Password              : Encrypt Using The Given Text Password

--help                           : Prints This Content




#### --encrypt (options) (file_location) 

**Usage: bitscrypter --encrypt (OPTIONS) (FILENAME)**

**Options:** 

-k (key_location)               : Specify The Key To Use In Encryption Of File

--del-original                  : Delete The Original File (File In Use)





#### Define Level Of Encryption:

**Usage: bitscrypter --encrypt --high-risk (OPTION) (FILENAME)**

**bitscrypter -e --low-risk (OPTION) (FILENAME)**

**Options:**

--high-risk                    : Encypts The File With High Level Encryption

--low-risk                     : Encrypt The File With Low Level Encryption


## Author
* **Vibhuti Singh** - **_College Student_** :wink: -[ABES Engineering College,Ghaziabad](https://www.abes.ac.in/)
  **_Also_** : **Triaxial Developer** : **_(TriDev)_**
  
  
  
