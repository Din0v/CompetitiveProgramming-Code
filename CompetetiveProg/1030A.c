/*Cf problem 1030A in search for an easy problem found here:
https://codeforces.com/problemset/problem/1030/A
*/

# include <stdio.h>

int main(){
    int n, i, res = 0 ; 
    int people[103];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &people[i]);
    }

    for(i=0; i<n; i++){
        res = people[i] + res;
    }

    if(res == 0){
        printf("EASY");
    }
    else{
        printf("HARD");
    }
    

}