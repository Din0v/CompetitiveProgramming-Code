/*CF problem 313A finding the smallest negative number to delete
found here: 
https://codeforces.com/problemset/problem/313/A
*/

#include <stdio.h>

int main(){
    int n;
        scanf("%d",&n);
    int Massimo=n;

   if(n/10>Massimo){
    Massimo=n/10;
   }
// vedi la notazione posizionale nei tuoi appunti.
// il modulo di un numero negativo è sempre negativo ? SI!
// nel secondo caso:
/*  1. n%10  
    2. (n/100)*10 e come dire 1 x 10^1 
    eleminando il due*/
   if(((n%10)+(n/100)*10)>Massimo){
    Massimo=(n%10)+(n/100)*10;
   }
   
  // printf("%d\n", -123%10);
   printf("%d",Massimo);

}

