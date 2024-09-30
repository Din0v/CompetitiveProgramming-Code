#include <stdio.h>

int main(){
    
    float m = 300;
    float fx = 300.6006;
    float *z;
    z = &m;
    
    
      printf("using the & operator: \n");
      printf("the address of m is:           %p \n", &m);
      printf("the value of m using pointer:  %.0f \n", *z);
      
      printf("the address of fx is:          %p \n", &fx);
      z = &fx;
      printf("the value of fx using pointer: %f \n", *z);

    return 0;
}
