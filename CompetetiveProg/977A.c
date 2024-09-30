/*CF 977A.c it can be found here:
https://codeforces.com/problemset/problem/977/A
che cosa ho imparato ?
vediamo....
*/

# include <stdio.h>

int main(){
    int n, k, i;
    scanf("%d", &n);
    scanf("%d", &k);
    
    while(k--){
        if(n%10!=0){
            n = n-1;
        }
        else{
            n = n/10;
        }
    }
    printf("%d\n", n);
}