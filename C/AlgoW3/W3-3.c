/*Write a C program to check two given integers, 
and return true if one of them is 30 
or if their sum is 30*/

# include <stdio.h>
#define FALSE (1==0)
#define TRUE  (1==1)

int testfun(int a, int b){
    if ( a == 30 || b == 30){
        return TRUE;
    }
    else if( a + b == 30 )
        return TRUE;
    
    else
        return FALSE;
}

int main(){
    printf("True or false\n%d \n", testfun(30,15));
}