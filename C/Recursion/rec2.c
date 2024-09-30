#include <stdio.h>

//int sumOfRange(int);

int sumOfRange(int n1){

    int res; // il risultato!
    if ( n1 == 1){
        return (1);  // caso base ?? 
        }
    else {
        res = n1 + sumOfRange(n1 - 1); // chiamata ricorsiva.
        }
    return (res);
    
}

int main(){

    int n1; 
    int sum;
    printf("Input the number range: ");
    scanf("%d", &n1);
    sum = sumOfRange(n1);
    printf("\n the sum of the numbers from 1 to %d is: %d\n", n1, sum);


}


