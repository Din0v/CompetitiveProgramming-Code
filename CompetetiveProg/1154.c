/* DA RIVEDERE !!!
CF problem found here: 
https://codeforces.com/problemset/problem/1154/A
cosa hi imparato ?
very tricky... 
*/

#include<stdio.h>
int main(){
    int a[4],contatore=0,i;

    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
        if(a[i]>contatore){ 
            contatore=a[i];
        }
    }

    for (i=0;i<4;i++)
        if((contatore-a[i])!=0){
             printf("%d ",contatore-a[i]);
        }

}