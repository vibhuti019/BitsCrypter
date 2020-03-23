#include<stdio.h>
int putData(int *intArray,FILE *fptr) {
    // integer variable
    int num;
    fseek(fptr,0,SEEK_SET);

    // open the file in write mode
    fptr = fopen("integers.txt", "w");
  
    if (fptr != NULL) {
        printf("File created successfully!\n");
    }
    else {
        printf("Failed to create the file.\n");
        // exit status for OS that an error occurred
        return -1;
    }
    int i=0;
    // enter integer numbers
    while (1) {
        num=intArray[i];
        if (num != -1) {
            putw(num, fptr);
            printf("%d,",num);
            i++;
        }
        else {
            break;
        }
    }
  
  // close connection
  fclose(fptr);
  
  // open file for reading
  
  return 0;
}
int readData(FILE *fileToFetchData,int noOfCharactersToFetch,int filePointerLocation){
    
    int num;
    
    fseek(fileToFetchData,filePointerLocation,SEEK_SET);

    int i=0;
    // display numbers
    printf("\nNumbers Being Read:\n");
    while (((num = getw(fileToFetchData))!=EOF)||noOfCharactersToFetch!=i) {
        printf("%d\n", num);
        i++;
    }
  
    printf("\nEnd of file.\n");
  
     // close connection
    fclose(fileToFetchData);
  
}
int main(int argv,char *args[]){
    int i=99;
    int newNumber=1;
    int integerArray[100];
    FILE *fileToPutAndReadData;
    fileToPutAndReadData = fopen("Integers2.txt", "r");
    printf("%d",argv);
    if(0){
        while(i!=-1){
            newNumber=i;
            integerArray[i]=newNumber;
            printf("%d=%d=%d\n ",integerArray[i],newNumber,i);
            i--;
        }
        integerArray[99]=-1;
        putData(integerArray,fileToPutAndReadData);
    }
    else{
        readData(fileToPutAndReadData,1000,0);
    }
    fclose(fileToPutAndReadData);
}
