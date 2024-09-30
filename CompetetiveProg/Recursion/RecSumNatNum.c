/*soluzione ricorsiva della somma di N numeri naturali*/

#include <stdio.h>

int sum(int n){
    if(n>0) return n + sum(n-1);
    else return 0;
}

void main (){
    printf("%d", sum(12345));
}
