#include <stdio.h>
 
 int x = 0; 

 int f1 (int w){
    int z = w + x++;
     {int z = w + x++;}
    return z; 
 }

 int main(){
    printf("%d %d\n", f1(10), f1(10)); /* problema numero 1 qui in questo formato adiacente */
    printf("%d \n", f1(10));
    printf("%d \n", f1(10));
 }