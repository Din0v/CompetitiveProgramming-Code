/*CF problem 160A twins stealing money found here:
https://codeforces.com/problemset/problem/160/A
cosa Ho imparato ? 

1. come e  dove ed il perchè,  utlizzare algoritmi di ordinamento, 
*/
 
# include <stdio.h>

int main(){
    int n, i, a, j; 
    int sum = 0, moneteDaPrendere = 0, count =0;
    int Monete[100];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &Monete[i]);
    }

    for(i=0; i<n; i++){
        sum = Monete[i] + sum;
    }
    // printf("%d\n", sum);

/* sort: */
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(Monete[i]<Monete[j]){
                a = Monete[i];
                Monete[i] = Monete[j];
                Monete[j] = a;
            }
        }
    }
    // for(i=0; i<n; i++){
    //     printf("%d ", Monete[i]);
    // }
    // printf("\n");

 //   for(i=0; i<n; i++){
        for(i=0; i<n; i++){
            if((sum/2)>=moneteDaPrendere){
            moneteDaPrendere = Monete[i] + moneteDaPrendere;
            count++;
            }
        }

//}
    // printf("%d\n", moneteDaPrendere);
    printf("%d", count);
}