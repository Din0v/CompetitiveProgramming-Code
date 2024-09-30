/*https://codeforces.com/problemset/problem/1692/A
Output the biggest number of the 3 
*/

#include <stdio.h>


void  valutare(int a, int b, int c, int d){
    int r;
    printf("%d\n",(b>a)+(c>a)+(d>a)); // abbiamo usato il valore del condizionale 1 o 0 (vero / falso) e li abbiamo sommati come in un casting primitivo.
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int  a, b, c, d;
        int count = 0;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        valutare(a, b, c, d);   
    }


}