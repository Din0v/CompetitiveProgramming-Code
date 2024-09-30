/*Linear Kingdom CF 116A found here:
https://codeforces.com/problemset/problem/116/A
coso ho imparato ?
*/

#include <stdio.h>


int main(){
    int n, a, b;
    int passengerCount = 0, currentCount=0;
    scanf("%d", &n);
   
    while(n--){
        scanf("%d %d", &a, &b);
        
        currentCount = currentCount - a;
        currentCount = currentCount + b;

        if( currentCount > passengerCount ){
            passengerCount = currentCount;
        }
    }

    printf("%d \n", passengerCount);
}
