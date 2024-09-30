/*Second try at 427A 
l'ordine è importante!!*/

#include <stdio.h>

int main(){
    int n ,i, police = 0, crime = 0;    
    int arr[100001];

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){

        if(arr[i] > 0) police = police + arr[i];

        else if(arr[i]<0 && police==0){
            crime++;
        }

    }

    printf("%d",crime);
}