/*a simple program to compute the standard deviation in an array of elements 
we need the sqrt

we need the mean 
we need the ith element squared 
we need the sum / population 
*/


#include <stdio.h>
#include <math.h>


float sdtev(float a[], int size){
    float mean = 0, total = 0;

    for(int i=0; i<size; i++){
        total = a[i] + total;
        mean = total / size;
    }

    float sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + pow(a[i] - mean, 2);
    }

    return (sqrt(sum / size));

}



int main(){
    float a[] = {9.2, 1.5, 6.7, 5.5, 8.2, 7.1};
    float result = sdtev(a, 6);
    printf("standard diviation is: %lf\n", result);
}
