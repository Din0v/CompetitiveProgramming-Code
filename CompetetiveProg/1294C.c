/*Finding if the a number has 3 distinct mutiples a b c 
the problem is 1294C found here: 
https://codeforces.com/problemset/problem/1294/C
how am i going to solve it ? 
1. primo uso sul campo di cbrt() cubic root function !
2. this is a clown world in order to find solution 
*/

#include <stdio.h>
#include <math.h>

int countDistinctPrimeFactors(int n) {
    int distinctFactors[100];  // Array to store distinct prime factors
    int count = 0;  // Counter variable for distinct prime factors
    
    // Initialize the array with zeros
    for (int i = 0; i < 100; i++) {
        distinctFactors[i] = 0;
    }
    
    // Find the prime factors
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            // Check if the factor is distinct
            if (distinctFactors[i] == 0) {
                distinctFactors[i] = 1;
                count++;
            }
            n = n / i;
        }
    }
    
    // If n is a prime number greater than 2, it is a distinct prime factor
    if (n > 2) {
        if (distinctFactors[n] == 0) {
            distinctFactors[n] = 1;
            count++;
        }
    }
    
    return count;
}

void primeFactors(int num)  
{  
    int count;  
  
    for(count = 2; num > 1; count++)  
    {  
        while(num % count == 0)  
        {  
            printf("%d ", count);  
            num = num / count;  
        }  
    }  
    printf("\n");  
} 



int main(){
    int t;
    long long n; 

    // while(t--){
    //     scanf("%lld", &n);


    // } 
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int distinctPrimeFactorCount = countDistinctPrimeFactors(number);
    // ci serve the number of distinct PRIME factors!!
    if(distinctPrimeFactorCount>3){
        printf("NO\n");
    }
    else if(distinctPrimeFactorCount<=3){
        printf("YES\n");
    }
    
    printf("Prime factors of %d are: ", number);
    primeFactors(number);
}

