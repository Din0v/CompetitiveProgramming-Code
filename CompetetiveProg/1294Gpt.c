#include <stdio.h>

void findDistinctIntegers(int n) {
    if (n < 24) {
        printf("NO\n");
        return;
    }

    for (int a = 2; a <= n / 2; a++) {
        if (n % a == 0) {
            int remaining = n / a;
            for (int b = a + 1; b <= remaining / 2; b++) {
                if (remaining % b == 0) {
                    int c = remaining / b;
                    if (c > b) {
                        printf("YES\n");
                        printf("%d %d %d\n", a, b, c);
                        return;
                    }
                }
            }
        }
    }

    printf("NO\n");
}

int main() {
    int number;
    int t;
    scanf("%d", &t);
    while(t--){
    scanf("%d", &number); 
    findDistinctIntegers(number);
    }
    return 0;
}



// Soluzione accettata

/*

    #include <stdio.h>
    #include <math.h>
     
    long int fact(long int n, long int a)
    {
        long int sq=sqrt(n), i;
        for(i=a;i<=sq;i++)
            if(n%i==0)return i;
        return 0;
    }
     
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            long int n, a, b, c;
            scanf("%ld",&n);
            a=fact(n,2);
            if(a==0){printf("NO\n");continue;}
            b=fact(n/a,a+1);
            if(b*b==n/a||!b){printf("NO\n");continue;}
            else printf("YES\n%ld %ld %ld\n",a,b,(n/a)/b);
        }
    }
    
    */