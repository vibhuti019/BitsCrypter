#include <stdio.h>
#include <string.h>
#include <stdbool.h>


//Returns Location Of File Pointer And 0 If End Has Been Reached 
int fetchDataFromFile(FILE *fileToFetchDataFrom,int noOfCharactersToFetch,int filePointerLocation,char *fileContent,bool fetchDataInIntegerFormat){
   
   printf("Function Call Successful");

   int i;
   int pointerMultiplyingFactor=1;

   char fileCurrentChar;
   int fileCurrentInt;

   if(fetchDataInIntegerFormat){
      pointerMultiplyingFactor=4;
   }


   fseek(fileToFetchDataFrom,pointerMultiplyingFactor*filePointerLocation,SEEK_SET);

   for(i=0;i<noOfCharactersToFetch;i++){
      
      if(fetchDataInIntegerFormat){
         fileCurrentInt=getw(fileToFetchDataFrom);
      }
      else{
         fileCurrentChar=getc(fileToFetchDataFrom);
      }

      if(fileCurrentChar!=EOF||fileCurrentInt!=EOF){
         fileCurrentChar=atoi(fileCurrentInt);
         fileContent[i]=fileCurrentChar;
      }
      else{
         fileContent[i]=EOF;
         break;
      }
   }

   filePointerLocation=ftell(fileToFetchDataFrom);

   fclose(fileToFetchDataFrom);
   
   if(i==noOfCharactersToFetch){
      return filePointerLocation;
   }
   else{
      fileContent[i]='\0';
      return 0;
   }

         
}



int putIntegerDataInFile(FILE *fileToPutDataIn,int *arrayOfIntergerData,int noOfCharactersToBeWritten,int filePointerLocation){
   int i;
   
   fseek(fileToPutDataIn,filePointerLocation,SEEK_SET);

   for(i=0;i<noOfCharactersToBeWritten;i++){
      putw(arrayOfIntergerData[i],fileToPutDataIn);
      printf("%d\n",arrayOfIntergerData[i]);
   }
   fclose(fileToPutDataIn);
}

int readDataInIntegerForm(FILE *fileToFetchData,int noOfCharactersToFetch,int filePointerLocation){
    
    int num,i=0;
    
    while (((num = getw(fileToFetchData))!=EOF)&&filePointerLocation!=i) {
        i++;
        printf("Not Reading%d",i);
    }

    // display numbers
    printf("\nNumbers Being Read:\n");
    while ((num!=EOF&&(num = getw(fileToFetchData))!=EOF)&&noOfCharactersToFetch!=i) {
        printf("%d\n", num);
        i++;
    }
  
    printf("\nEnd of file.\n");
  
     // close connection
    fclose(fileToFetchData);
  
}

int main(int argv,char *args[]){
   FILE *fp,*fp2;
   fp2=fopen("Integers2.txt","r");
   
   int newNumber=1;

   int fetchDataFromLocation=atoi(args[1]);
   int noOfCharactersToBeFetchedOrWritten=atoi(args[2]);
   int writeTrue=atoi(args[3]);
   printf("%d",noOfCharactersToBeFetchedOrWritten);
   int integerArray[noOfCharactersToBeFetchedOrWritten];
   
   char fileContent[noOfCharactersToBeFetchedOrWritten];
   int i=0;// noOfCharactersToBeFetchedOrWritten;
   
   printf("Write True=%d\n",writeTrue);
   i=0;
   if(writeTrue==1){
        while(i<(noOfCharactersToBeFetchedOrWritten-1)){
            printf("inv");
            newNumber=i;
            integerArray[i]=newNumber;
            printf("%d=%d=%d, ",integerArray[i],newNumber,i);
            i++;
        }
        integerArray[i]=-1;
        putIntegerDataInFile(fp2,integerArray,noOfCharactersToBeFetchedOrWritten,fetchDataFromLocation);
    }
   printf("Reading Phase:\n\n");
   readDataInIntegerForm(fp2,noOfCharactersToBeFetchedOrWritten,fetchDataFromLocation);
   //fetchDataFromFile(fp2,noOfCharactersToBeFetchedOrWritten,fetchDataFromLocation,fileContent,1);
   free();
}

