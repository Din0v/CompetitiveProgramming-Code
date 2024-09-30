/*CF problem of odd divisor found here:
https://codeforces.com/problemset/problem/1475/A
cosa ho imparato ? 
attenzione Alla divisione!! ed alla domanda
la funzione rimane bloccata se 
*/


// NON FUNZIONA!!!!! ATTENZIONE
#include <stdio.h>

int has_odd_divisor(long long n) {
  for (long long i = 3; i <= n; i += 2) {
    if (n % i == 0) {
      printf("YES");;
    }
    else printf("NO");
  }
 
}


long long  divisioriDispari(long long a){
    int i;
    for(i=3; i<a; i+=2){
        if(a%i==0)
            return 0;
    }
}

int main(){
    int i, t; 
    scanf("%d", &t);

    long long n[10003];
    for(i=0; i<t; i++){
        scanf("%lld", &n[i]);
    }
    
    for(i=0; i<t; i++){
     printf("%B\n", has_odd_divisor(n[i]));
    }
    
    // for(i=0; i<t; i++){
    // //printf("%lld\n", divisioriDispari(n[i]));
    //     if (n[i] == 2 )printf("NO\n");
    //     else if(divisioriDispari(n[i])== 0)printf("YES\n");
    //     else printf("NO");
    // }
    

}
    