/* Da rifare in un altro modo!
CF 155A finding the max the values above the median ?
https://codeforces.com/problemset/problem/155/A
Cosa ho imparato ?*/


#include<stdio.h>

int main(){
    int n,i,j, k=0,min,max;

    scanf("%d",&n);
    
    /*In short, this code finds the number of times the 
    maximum and minimum values have been updated during the 
    processing of 'n' integers*/
    for(i=0;i<n;i++){
        scanf("%d",&j);
        if(i==0){
            min=j;
            max=j;
        }
        if(j>max){
            max=j;
            k++;
        }
        else if(j<min){
            min=j;
            k++;
        }
}
    printf("%d",k);
return 0;
}