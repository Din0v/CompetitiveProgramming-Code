/*Funzione ausiliare a 61A per isolare i valori decimali di un numero */

#include <stdio.h>
#include <stdlib.h>
// unsigned numDigits(const unsigned n) {
//     // if (n < 10) return 1;
//     // return 1 + numDigits(n / 10);
//     int sum = 0;
//     while(getchar()!=0){
//         scanf
//     }
// }


int main(){
    int i=0;
    int *p;
    char c;
    int size; 
    printf("Enter size :");
    scanf("%d",&size); 
    *p = malloc(sizeof(int)*size);
    do
    {
    printf("Enter Number : ");
    scanf("%d",&p[i]);
    i++;
    printf("Press 'q' or 'Q' to quit or any other key to continue : ");
    scanf("%c",&c);
    }
    while(c!='q' && c!='Q' && i<=size);
    p=realloc(p,i*sizeof(int));

}