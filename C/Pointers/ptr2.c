# include <stdio.h>

int main(){

    int* ab; // here is an int pointer ab
    int m; 
    
    m = 29;
    
    printf("\n address of ab is %p\n", &ab);
    printf("\n address of m is %p\n", &m);
    printf("\n value of m is %d\n", m);
    
    //*ab = m;
    
    printf("\n value of m through ab is %d\n", *ab);
    
    ab = &m;
    
    printf("\n value of m assigned to ab %d\n", *ab);
    printf("\n address of the pointer ab %p\n", ab);

    m = 30;
    
    printf("\n value after the modifications is %d\n", *   ab); // i can leave a space between the * and the variable. 
    
    *ab = 7;
    printf("\n the value of m now is %d\n", m);
    printf("\n the address of m is %p\n", &m);
}
