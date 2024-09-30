# include <stdio.h>

int main(){

	int n,i, sum = 0 ;
	for (i = 1; i < 1000; i++){
		if (i%3 == 0 || i%5 == 0){
		//	printf(" %d", i);
			sum = sum + i;
				}
	
	}
	printf("the sum of multiples is: %d", sum);	
}
