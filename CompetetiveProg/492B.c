/*CF problem Vanya and lanterns found here:
https://codeforces.com/problemset/problem/492/B
cosa ho imparato ?
*/

#include <stdio.h> 

int main(){
    int n, l;
    scanf("%d %d ", &n, &l);

    double lantern[1001];

    int i, j; 
    for(i=0; i<n; i++){
        scanf("%lf", &lantern[i]);
    }
     
    // selection sort 
    int temp;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            
            if(lantern[j]<lantern[i]){
                temp = lantern[i];
                lantern[i] = lantern[j];
                lantern[j] = temp; 
            }
        }
    }

    // for (i = 0; i<n; i++){
    //     printf("%f ", lantern[i]);
    // }

    double w, d = lantern[0] - 0;

    for(i=0; i<n-1; i++){ // sempre meno 1 dato che l'indece parte da zero
        w = (lantern[i+1] - lantern[i])/2;
        if(w>d)
            d = w;
    }

    if((l - lantern[n-1])>d){
        d = l - lantern[n-1];
    }
    printf("%f", d);

}