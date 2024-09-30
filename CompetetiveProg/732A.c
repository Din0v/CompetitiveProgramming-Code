/*CF problem found here:
https://codeforces.com/problemset/submission/732/153746582 
very weird solution !!!
*/

#include <stdio.h>

int main(){
    int n, r; 
    scanf("%d %d", &n, &r);

    int i;
     for(i=1; i<=10 && (n*i)%10 != 0 && (i%10)!=r; i++){
      printf("%d\n", i);
    }
}