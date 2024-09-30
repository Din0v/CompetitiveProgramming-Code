# include <stdio.h>

long long  int fib(){
    static long long int first = 0;
    static long long int second = 1; 
    long long int out = first + second;
    first= second;
    second = out;
    return out;
}

int main(){
    int i;
    for(i; i<50; i++)
        printf("%lld\n", fib());
     return 0;
}