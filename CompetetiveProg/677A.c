/*CF problem Nr. 677A found here
https://codeforces.com/problemset/problem/677/A
*/ 

# include <stdio.h>

int main(){
    int n, h, i, count=0;
    int a[1000];
    int res[1000];
    scanf("%d %d\n", &n, &h);

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        if(a[i]>h){
            res[i]= 2;
        }
        else{
            res[i]= 1;
        }
    }

    for(i=0; i<n; i++){
        count = res[i] + count;
    }

    printf("%d", count);

}
