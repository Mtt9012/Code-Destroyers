#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// Tool to clear stdin buffer
#define CLEARBUFFER while(getchar() != '\n')
#define CLEARSCREEN printf("\e[1;1H\e[2J")

// Global variables
unsigned short int numberOfAttempts, numberOfNumbers, sizeOfNumberScope, userInput;


// Modular functions
int intInputFunc(){
    printf("\n> ");
    int input;
    if(scanf("%d", &input) && input > 0){
        return input;
    } else {
        CLEARBUFFER;
        return -1;
    }
}

// Starting screen function
int startingScreenFunction(){
    start:
    CLEARSCREEN;
    printf("+----------# CODE DESTROYERS IN DEV #----------+\n+----------# A CODE DECRYPTION GAME #----------+\n************************************************");
    printf("\nWRITE:\n1 TO ENTER GAME\n2 TO LEAVE GAME");
    userInput = intInputFunc();
    switch (userInput)
    {
    case 1:
        printf("STILL IN DEVELOPMENT!");
        return 0;
    case 2:
        printf("THANK YOU FOR PLAYING!");
        return 0;
    default:
        break;
    }
    goto start;
}

// Starting function
int main(){
    startingScreenFunction();
}
