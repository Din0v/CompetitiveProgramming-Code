#include <stdio.h>

int noOfDigits (int n1);

int main(){

    int n1, ctr; // control and the digit
    printf("Input the number:  ");
    scanf("%d", &n1); // input the number
    
    ctr = noOfDigits (n1); // pass the number n1 to the function Number of digits. 
    printf("The number of digits in the number is: %d \n\n", ctr);
    return 0;
    
}

int noOfDigits (int n1){

    static int ctr = 0; 
    
    if(n1 != 0){
        
        ctr++ ;
        noOfDigits(n1/10);
        
        }

    return ctr;

}
