/*Cf problem found here:
https://codeforces.com/problemset/problem/25/As
it's about finding the number with an uneven step to the rest
cosa ho imparato ?
la soluzione mi è molto vicina ? 
voglio trovare le massime occorrenze in nella matrice diff
ma rimane il caso con 3 elementi da considerare*/

# include <stdio.h>

int main(){
    int n, i;
    int Tofind[101];

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &Tofind[i]);
    }

    int j, diff[101];
    for(i=0; i<n-1; i++){
        diff[i] = Tofind[i+1] - Tofind[i]; 
    }

    for(i=0; i<n-1; i++){
        printf("%d ", diff[i]);
    }
    
    if(n=3){
        for(i=0; i<3; i++){
            
        }
    }
}

