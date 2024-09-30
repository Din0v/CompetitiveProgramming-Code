void findPrimeFactors(int n) {
    // Print all the 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
 
    // n must be odd at this point. So, a skip of 2 (i = i + 2) can be used

    for (int i = 3; i <= sqrt(n); i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
 
    // Handle the case when n is a prime number greater than 2
    if (n > 2) {
        printf ("%d ", n);
    }
}
// simpler version of the Prime Factoring!!
void primeFactors(int num)  
{  
    int count;  
  
    printf("\nPrime Factors of %d are ..\n", num);  
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



// prime factoring with count return:

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

int main(){
    int number = 12345;
 
    printf("Prime factors of %d are: ", number);
    findPrimeFactors(number);
        
    int distinctPrimeFactorCount = countDistinctPrimeFactors(number);
    printf("Number of distinct prime factors: %d\n", distinctPrimeFactorCount);

}