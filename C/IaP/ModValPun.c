#include <stdio.h>

int main(){
    int x = 10; 
    int y = 100;
    
    printf("il Valore di x è %d \n", x  );
   
    int* p_x= &x; 
    *p_x= 12;
    printf("il Valore di x è %d \n", *p_x  );

    //  where did we get the p_x variable from ??? 
    int *p_z = p_x; // p_z punta alla variabile p_x di tipo puntatore perchè alla fina è pur sempre una variabile!!
    *p_z = 42;
  
    int** b = &p_x; // pointer inseption, the address of the address pointer ?? ?
    printf("il Valore di x è %d \n",*p_z  );
    printf("il indirizzo di x è %p \n", &p_z  );
    printf("il indirizzo di x è %p \n",&p_x  );
    printf("il indirizzo di x è %p \n",&x  );
    printf("il indirizzo di b è %p \n",&b  );
    printf("il Valore di b è %d \n", **b  ); //**b e *p_x sono intercambiabili. 
        
}
