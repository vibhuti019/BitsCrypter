#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int changeArgumentIfLevelPresent(int initialTotalNoOfArguments,char *initialStringValueOfArguments[],char **changedArguments){

    //Check If Level Is Defined By The User
    int loopForNoOfArguments;
    int tempVariableNoOfArguments=1;
    int newTotalNoOfArguments=initialTotalNoOfArguments;
    for(loopForNoOfArguments=1;loopForNoOfArguments<initialTotalNoOfArguments;loopForNoOfArguments++){


        //If High Risk Level Is Present
        if(!strcmp(initialStringValueOfArguments[loopForNoOfArguments],"--high-risk")){
            //First Index Of Changed Arguments Stores Risk Level For The Program
            changedArguments[0]='1';
            newTotalNoOfArguments--;
        }


        //If Low Risk Level Is Present
        else if(!strcmp(initialStringValueOfArguments[loopForNoOfArguments],"--low-risk")){
            newTotalNoOfArguments--;
        }


        //Normal Execution
        else{
            changedArguments[tempVariableNoOfArguments]=initialStringValueOfArguments[loopForNoOfArguments];
            tempVariableNoOfArguments=tempVariableNoOfArguments+1;
        }
    }

    return newTotalNoOfArguments;
}
//Verifies If level Argument Is Used Correctly
int verifyLevelArgument(char *nextArgumentAfterLevel,char *previousArgumentAfterLevel){
}


int checkFirstArgument(char firstArgument[]){

    //Checks If First Argument Is -e
    if (strcmp(firstArgument,"-e")){
        //If Yes Return Valeue 1
        return 1;
    }

    //Checks If First Argument Is -d
    else if(strcmp(firstArgument,"-d")){
        //If Yes Return Valeue 2
        return 2;
    }

    //Checks If First Argument Is -k
    else if(strcmp(firstArgument,"-k")){
        //If Yes Return Valeue 3
        return 3;
    }

    //Checks If First Argument Is --encrypt
    else if(strcmp(firstArgument,"--encrypt")){
        //If Yes Return Valeue 4
        return 4;
    }

    //Checks If First Argument Is --password
    else if(strcmp(firstArgument,"--password")){
        //If Yes Return Valeue 5
        return 5;
    }

    //If Something Else Is Present
    else {
        return 0;
    }
}


int main(int argv,char *args[]){
    int i,j=1;
    bool riskLevelHigh=false;
    char *changedArgs[argv];
    int argsCount=argv;


}