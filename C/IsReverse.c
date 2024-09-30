#include <stdio.h>

int isReverse(int *A, int *B, int size){
    int i ; /*Posizionamento*/
    for(i=0; i<size; i++ )
        if(A[i] != B[size-i-1]){
       return 0;
       }
    return 1;
}

int main(){

    int A[] = {7, 9, 12, 4, 21};
    int B[] = {21, 4, 12, 9, 7};
    int C[] = {21, 4, 33333, 9, 7};

    printf("%d \n", isReverse(A, B, 5));
    printf("%d \n", isReverse(A, C, 5));
}