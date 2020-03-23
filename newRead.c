
#include <stdio.h> 
#include <stdlib.h> // For exit() 
  
int main() 
{ 
    FILE *fptr; 
  
    char filename[100];
    int c; 
  
    printf("Enter the filename to open \n"); 
    scanf("%s", filename); 
  
    // Open file 
    fptr = fopen(filename, "r"); 
    if (fptr == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = getw(fptr); 
    while (c != EOF) 
    { 
        printf ("%d,", c); 
        c = getw(fptr); 
    } 
  
    fclose(fptr); 
    return 0; 
}
