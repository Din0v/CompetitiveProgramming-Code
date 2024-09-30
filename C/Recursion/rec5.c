#include <stdio.h>

int findGCD(int num1, int num2);

int main(){

    int num1, num2, gcd;
    printf("input the first number ");
    scanf("%d", &num1);
    printf("input the second number ");
    scanf("%d", &num2);
    
    gcd = findGCD(num1, num2);
    printf("\n the GCD of %d and %d is: %d\n\n", num1, num2, gcd);
    return 0;

}

int findGCD(int a, int b){

    while (a!=b){
        if(a>b)
            return findGCD(a-b, b);
        else
            return findGCD(a, b-a);
        }
      return a;  
       

}
