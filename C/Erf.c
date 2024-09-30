//Error Function 
#include <stdio.h>
#include <math.h>

void main(){
    printf("Normal Distribution, %g\n", erf(1.96*sqrt(1/2.)));
// why is the point after 1/2. important ??
// because g is a decimal floating point 
}