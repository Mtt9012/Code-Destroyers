#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Tool to clear buffer
#define CLEARBUFFER while(getchar() != '\n')

// Modular functions
int InputFunc(){
    int input;
    while (true)
    {
        printf("> ");
        if(scanf("%d", &input)){
            return input;
        }
        CLEARBUFFER;
        printf("ILLEGAL INPUT!\n");
    }
}


// Starting function
int main(){
    return 0;
}