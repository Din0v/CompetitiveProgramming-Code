# include <stdio.h>

int main() {

	int i, n;
	int sum = 0 ; // è importante inizalizzare la variabile sum con il 0 perchè altrimenti da risultati errarti.
	int q; 
	
	printf("enter the input\n");
	scanf("%d", &n);
	for(i = 1 ; i <= n; i++){
		printf(" %d", i );
		sum = sum + i;
	}
	
	printf("\n");
	
	printf(" the sum is: %d", sum);
		printf("\n");
		printf(" q has this value: %d", q);

}
