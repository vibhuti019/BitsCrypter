#include <stdio.h>
#include <strings.h>
int printhelp(char *license){
    printf("BitsCrypter Command Line Utility\nVersion: 1.0\nDeveloped By: TriDev\nLicensed To: %s\n\nUsage: bitscrypter [OPTIONS]...  [FILENAME]... \nEncrypt and Decrypt a file. \nOr Create A Key File(for later use in encryption and decryption).\n\nOptions And Arguments (According To Environment Values):\n-e [filelocation]              : Encrypts A File And Create A Key\n-d [filelocaton] [keylocation] : Decrypts The File Using The Sppecified Key\n-k [filename]                  : Creates The Key (With The Sppecified Name)\n--password Password            : Encrypt Using The Given Text Password\n--help                         : Prints This Content\n\n--encrypt [options] [filelocation] \nUsage: bitscrypter --encrypt [OPTIONS] [FILENAME]\nOptions: \n-k [keylocation]               : Specify The Key To Use In Encryption Of File\n--deloriginal                  : Delete The Original File (File In Use)\n\n--level [options] [filelocation]\nUsage: bitscrypter --encrypt -k --level [OPTION] [FILENAME]\n       bitscrypter -e --level [OPTION] [FILENAME]\n       bitscrypter -password PASSWORD --level [OPTION] [FILENAME]\nOptions:\n--high-risk                    : Encypts The File With High Level Encryption\n--low-risk                     : Encrypt The File With Low Level Encryption \n\n", license);
}

int main(){
    printhelp("Vibhuti");
}