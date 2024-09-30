#include <stdio.h>
int inc(int x){
	x = x + 1;
	return x;
}

int main(){
	int x = 0;
	inc(x);
    printf("%d\n", x);
	printf("%d\n", inc(x));
return 0; 
}