/*Write a C program to get the absolute difference between n and 51. 
If n is greater than 51 return triple the absolute difference*/

# include <stdio.h>
# include <math.h>
# include <stdlib.h>

int abs51 (int n){
    if(n > 51){
        return abs(n-51)*3;
    }
    else{
        return abs(n-51);
    }
    /*
    t = n - 51;
    t = abs(t);

    if(t > 51){
        return t*3;   }
    else{
        return t;
    }
    */
}

int main(){
    printf("absolute difference is %d", abs51(53));
    }

