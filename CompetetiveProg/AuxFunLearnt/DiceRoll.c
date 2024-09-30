/*How to roll a dice in C
Using pseudo random number generation*/

#include <stdio.h>
#include <stdlib.h> // srand() function
#include <time.h> // to get an actual seed for the number

int main(){

    srand(time(NULL)); // seed for the pseudoRandom number generator

    int dice = 5; 
    int roll = 0; 

    for(int i=0; i<= dice ; i++){
        roll = rand() % 6 + 1; 
        printf("Dice %d: %d\n", i, roll);
    }

    return 0;

}