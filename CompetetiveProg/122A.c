/*CF problem 122A found here:
https://codeforces.com/problemset/problem/122/A
NON PENSARE A SOLUZIONI COMPLICATE, PENSA A COSE SEMPLICI!!!
NIENTE ARRAY.
*/


#include <stdio.h>

int main(){
    int n, count = 0;
    scanf("%d", &n);

    if(n%4== 0 || n%7== 0 ||(n%47 == 0)||(n%74 == 0)||(n%444 == 0)||(n%447 == 0)||(n%474 == 0)||(n%744 == 0)||(n%477 == 0)||(n%774 == 0)||(n%747 == 0)||(n%777 == 0)){
        printf("YES\n");
    }     
    else{
        printf("NO\n");
    }
}
    /*
// finding the lucky number   
    else if((n/1000)%10==7 || (n/1000)%10==4 || (n/1000)%10==0 &&
       (n/100)%10==7 || (n/100)%10==4 ||  (n/100)%10==0 &&
       (n/10)%10==7 || (n/10)%10==4 || (n/10)%10==0 &&
       (n)%10==7 || (n)%10==4 ){
        printf("YES\n");
    }


 //  printf("%d\n", (478/100)%100);
 //   printf("%d", 47%10);
*/
