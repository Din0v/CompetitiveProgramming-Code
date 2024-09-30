# include <stdio.h>
# define max 100

void main(){
    int p[max]={ [0 ... 99]= 3}; // Sets all the values to 3!!
    int n, i, k, j;  // there are 4 Var, and one array
    // we set ther number of indicies
    printf("Enter lenght of array:");
    scanf("%d", &n);

    // we are inserting the elements here:
    printf("Enter %d elements of array\n", n);
    for(i = 0; i<=n-1; i++)
        scanf("%d", &p[i]);  
    //attenzione che i è iniziallizata a 0 percio si ha il n-1 nel for.

    //printing the array:
    printf("the array is:\n");
    for(i=0; i<=n-1; i++)
        printf("%d ", p[i]);    

    printf("\nEnter the position where to insert:");
        scanf("%d", &k);
        k--; // the position is always one value higher than the subscript

            for(j=n-1; j>=k; j--)
                p[j+1] = p[j];
        
    printf("n Enter the value to insert: \n");
        scanf("%d", &p[k]);

    printf("\n Array after insertion of element: \n");
        for(i = 0; i<=30; i++)
            printf("%d\n", p[i]);
}