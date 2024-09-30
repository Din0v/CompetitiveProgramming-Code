# include <stdio.h>

int main() {

	int i, sum;
	for(i = 1; i <= 10; i++){
		printf(" %d", i );
		sum = sum + i;
	}
	
	printf("\n");
	
	printf(" the sum is: %d", sum);


}
