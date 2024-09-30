#include <stdio.h>

int main(){

    int a,b,z; 
    int *pt, *qt;
    
    printf("enter first number  ");
    scanf("%d", &a);
    printf("\n");
    printf("enter second number  ");
    scanf("%d", &b);
    
    
    pt = &a;
    qt = &b;
    
    z = *pt + *qt;
   
    printf("\nthe sum is: %d\n\n", z);
    
   
    


}
