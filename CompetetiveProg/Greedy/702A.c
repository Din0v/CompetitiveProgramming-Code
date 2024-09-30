    #include <stdio.h>
     
    int main(void) {
    	int n, crnt, prev, max = 1, len;
    	scanf("%d", &n);
    	scanf("%d", &prev);
    	len = 1;
    	--n;
    	while (n--)
    	{
    		scanf("%d", &crnt);
    		if (crnt > prev) len++;
    		else len = 1;
    		if (len > max) max = len;
    		prev = crnt;
    	}
    	printf("%d\n", max);
    	return 0;
    }