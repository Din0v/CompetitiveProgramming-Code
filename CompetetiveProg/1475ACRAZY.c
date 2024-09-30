/*Se il modulo di un numero è pari allo zero e poi successivamente 
diviso in 2 ed ha un risultato diverso da 1, allora tassativamente avrà un divisiore dispari
*/


#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld",&a);
    while(a--) {
        scanf("%lld",&b);
        while(b%2==0) b/=2;
            if(b==1) printf("NO\n");
            else printf("YES\n");
        }
return 0;
}