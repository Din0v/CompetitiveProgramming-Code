# include <stdio.h>
# define max 100

int *maxmin(int ar[], int v); // prototipo 

void main(){
    int arr[max];
    int n, i, *p;
    printf("How many Values?");
    scanf("%d", &n);

    printf("Enter %d values\n ", n );
    for(i=0; i<n;i++)
        scanf("%d", &arr[i]);
    
    p=maxmin(arr,n);
    printf("Min Val is: %d\n", *p++);
    printf("Max Val is %d\n", *p);
}

int *maxmin(int ar[], int v){
    
    int i;
    static int mm[2];
    mm[0]=ar[0];
    mm[1]=ar[0];
    for(i=1; i<v;i++){
        if(mm[0]>ar[i])
            mm[0]=ar[i];
        if(mm[1]<ar[i])
            mm[1]=ar[i];
    }
    return mm;
}

// this is magic 