/*CF problem 580A calculating the maximum continously increasing substring
found here:
https://codeforces.com/problemset/problem/580/A
Cosa ho imparato ?
https://www.youtube.com/watch?v=aPQY__2H3tE
this is my first Dynamic programming problem and one of the basic stuff to do; 
watch the video above for a very nice explanation
*/

#include <stdio.h>

int main(){
    int n, i;
    int list[100003]; // attenzione alla dimensione del array 10^5 sono 5 zeri NON QUATTRO LOL 
    // altrimenti risulta in run time error Memory Leak
    int count = 1;
    int MaxCount = 1;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &list[i]);
    }

    // for(i=0; i<n; i++){
    //     printf("%d ", list[i]);
    // }

    for(i=1; i<n; i++){
        if(list[i]>=list[i-1]){
            count++;
            if(count > MaxCount){
                MaxCount = count;
            }
        }
        else{ 
        count = 1;
        }
    }
    printf("%d\n", MaxCount);
}
