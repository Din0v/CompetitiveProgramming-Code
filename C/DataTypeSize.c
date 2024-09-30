#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("Value of MaxInt is %i\n", INT_MAX);
    printf("Value of INT_Min is %i\n", INT_MIN);
    printf("An int takes this much in memory %Ilu \n", sizeof(int));

    printf("Value of FloatMax is %f\n", FLT_MAX);
    printf("Value of FloatMin is %0.50f\n", FLT_MIN);
    printf("A Float takes this much in memory %Ild \n", sizeof(float)); 


    /*The format specifier %z isn't used not supported anymore 
    there for we used what we used earlier!! 
    %Ild & %Ilu
    */
}