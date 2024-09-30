/*Problema 734A CF found here: 
https://codeforces.com/problemset/problem/734/A
cosa ho imparato ?

che questa mia soluzione con Array lunghissime è abbastanza spreconana in termini di memoria
*/

#include <stdio.h>
#include <string.h>

int main(){
    int n, i;
    scanf("%d\n", &n);
    int A=0, D=0;
    char result[n];
   
    fgets(result, n*sizeof(int), stdin);

        /*  for(i=0; i<n; i++){
        printf("%c", result[i]);
            printf(" %d ", i);
        }
        printf("\n");
        printf("%d", n);*/



    for(i=0; i<n; i++){
     if (result[i]== 'A'){
        A++;
     }
     else if(result[i] == 'D'){
        D++;
     }
    }

    if(A > D){
        printf("Anton");
    }
    else if(A < D){
        printf("Danik");
    }
    else if(A == D){
        printf("Friendship");
    }


}