/*CF problem of serja and Dima 381A found here:
https://codeforces.com/problemset/problem/381/A
cosa ho imparato ? 
è un classico problema di doppio puntatore 
NON FUNZIONAAAAAAAAAAAAAAA
*/

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n - 1; i++)
// Last i elements are already in place
    for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

#include <stdio.h>

int main(){
    int n, i; 
    scanf("%d", &n);

    int deck[n];
    
    for(i=0; i<n; i++){
        scanf("%d", &deck[i]);
    }

    for(i=0; i<n; i++){
        if(deck[i]> deck[i+1]){
            swap(&deck[i], &deck[i + 1]);
        }
    }

    for(i=0; i<n; i++){
        printf("%d ", deck[i]);
    }

}