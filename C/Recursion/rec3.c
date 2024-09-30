#include <stdio.h>

 int term; // Global variable for the inserted term :) noice

int fibonacci (int prNo, int num){  // previous number and current number

    static int i = 1; // static immutable value
    int nxtNo; // define the next number
   
    
    if (i == term)  // caso base!
        return (0);
    
    else {
        nxtNo = prNo + num; // il numero successivo è il numero precedente + il numero corrente
        prNo = num; // il numero precedente addesso e il numero corrente
        num = nxtNo; // il numero corrente è il numero nuovo cosi per andare avanti di un passo!!
        
        printf("%d ", nxtNo); // stampa il numero 
        
        i++;
        
        fibonacci(prNo, num);
  
  
  
  }
 return(0);

}

int main() {


    static int prNo = 0, num = 1;
    printf("\nInput number of terms for the series (<20): ");
    scanf("%d", &term);
    printf(" The Series are : \n");
    printf("1 ");
    
    fibonacci(prNo, num);
    printf("\n\n");



}
