/*CF problem 1540A found here:
https://codeforces.com/problemset/problem/1560/A
cosa ho imparato ?*/

#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    
//  Fare particolar attenzione sul doppio contatore!!
    while(n--){
        int i=0, j=0, Not3;
        scanf("%d", &Not3);

        for(i=1; j<Not3; i++){
            if(i%3!=0 && i%10!=3){
                j++;
            }
        
        }
    printf("%d\n",i-1); 
    } 
    
}


