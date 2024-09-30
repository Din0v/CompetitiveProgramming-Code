/*CF problem 1328 finding the divisible number A over B
found here:
https://codeforces.com/problemset/problem/1328/A
cosa ho imparato ? 
time Limit exceeded hence my current solution is not well optimized !!
my solution is completely retard and wasteful 
Di nuovo NON tutto Ciò che lucica è un array!!
*/

#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);

    int a,b; 

    // int ArrA[10003];
    // int ArrB[10003];

    // for(i=0; i<n; i++){
    //     scanf("%d %d", &ArrA[i], &ArrB[i]);
    // } 

    for(i=0; i<n; i++){
        scanf("%d %d", &a, &b);

        if(a%b == 0){
            printf("%d\n", 0);
        }
        else{
            printf("%d\n", b-(a%b));
        }
    } 

//     int count[10003] = {0};
// // the issue has to be here:
//      for(i=0; i<n; i++){
//         while(ArrA[i]%ArrB[i] != 0){
//             ArrA[i] = ArrA[i]+1;
//             count[i] = count[i] + 1;
//             // printf("%d\n", ArrA[i]);
//             // printf("%d\n", count);
//         }
//     }

//     for(i=0; i<n; i++){
//         printf("%d\n", count[i]);
//     }


    // printf("\n\n");

    // for(i=0; i<n; i++){
    //     printf("%d %d \n", ArrA[i], ArrB[i]);
    // } 
    
}