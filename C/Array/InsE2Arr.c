#include <stdio.h>
#define max 100

int main(){
    int p[max];
    int n, i, e, j; 
    printf("enter length of array: ");
    scanf("%d",&n);
    printf("\nenter %d elements of the array:\n ", n);
    for(i=0; i<n; i++){ // perchè l'indice del array comincia da 0 
        scanf("%d",&p[i]);
    }
    printf("\nThe array is: ");
    for(i=0; i<n; i++){
        printf("%d, ", p[i]);
    }
    printf("\nenter Position where to insert\n ");
        scanf("%d", &e);
    //e--; // non serve affatto, 
    for(j=n-1; j>=e; j--) // i don't understand this bit....
        p[j+1] = p[j]; // shifta un elemento in avanti...

    printf("\n enter the value to insert: \n"); 
    scanf("%d", &p[e]);

        printf("\nThe array is: ");
    for(i=0; i<=n; i++){
        printf("%d, ", p[i]);
    }
}


//     // printf("\nTest array is: \n");
//     // int q[5], r;
//     // for(r=0; r<(5-1); r++)
// 	//     scanf("%d", &q[r]);

//     printf("\n the NewTest array is: \n");
//     int r, q[] = {1, 2, 3 ,4 ,5}; 
//     for(r=0; r<=(5-1); r++)
//         printf("%d, ", q[r]);

// }