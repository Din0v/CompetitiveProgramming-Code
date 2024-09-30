 /*code foces problem trovato qui:
 https://codeforces.com/problemset/problem/1873/B
 mi chiede di trovare l'elemento minore di una matrice, e poi aggiungerene 1, ed alla fine multiplicare il tutto*/

 #include <stdio.h>
  

int main() {
    int a,n;
    int arr[a-1];
    

    scanf("%d", &n); //Nr. dei casi!
    
    while(n--){
        scanf("%d", &a);
        int i;
        for(i=0; i<a; i++){
            scanf("%d", &arr[i]);
        }
        
        int j;
        for(j=0; j<a; j++){
            printf("%d", arr[j]);
        }
        
    }

}


