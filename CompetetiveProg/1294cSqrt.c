/*Finding if the a number has 3 distinct mutiples a b c 
the problem is 1294C found here: 
https://codeforces.com/problemset/problem/1294/C
how am i going to solve it ? 
1. primo uso sul campo di cbrt() cubic root function !
2. Abbiamo poi fatto tre passi usando la radice quadra per ricavare 
*/

#include <stdio.h>
#include <math.h>


void findDistinctIntegers(int n) {
    // 24 is the smallest number that have three distinct integers 2, 3 ,4: che possiamo ricavarli appunto multiplicando questi tre numeri successivamente!!!
    if (n < 24) {   
        printf("NO\n");
        return;
    }
    
    // questa variable e solo qui per dare il limite al ciclo!
    // perchè la radice quadra ? 
    //vedi qui https://www.geeksforgeeks.org/find-all-factors-of-a-natural-number/
    // o bisogna scorre tutti i numeri che mi dava time limit error
    // oppure bisogna riccorre alla radice quadra vedi il link sopra
    int sqrtN = sqrt(n);

    for (int a = 2; a <= sqrtN; a++) {
        if (n % a == 0) {
            int remaining = n / a; 

            for (int b = a + 1; b <= sqrt(remaining); b++) {
                
                if (remaining % b == 0) {
                    int c = remaining / b;

                    if (c > b) {
                        printf("YES\n");
                        printf("%d %d %d\n", a, b, c);
                        return;
                    }
                }
            }
        }
    }

    printf("NO\n");
}

int main() {
    int number, t;
    scanf("%d", &t);
    while(t--){
    scanf("%d", &number); 
    findDistinctIntegers(number);
    }
    return 0;
}
