/* Da ripassare!!
CF problem 427A found here: 
https://codeforces.com/problemset/problem/427/A
Cosa ho imparato ?
*/
#include<stdio.h>
int main(){
    int n,m,tol=0,cnt=0;

    scanf("%d",&n);
    while(n--){
        scanf("%d",&m);
        
        tol =tol+m;
        if(tol<0){
            cnt++;
            tol=0;
        }
    }
    printf("%d",cnt);
    return 0;
}