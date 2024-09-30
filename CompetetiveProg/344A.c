/*CF problem 344A magnents and repulsion groups found here:
https://codeforces.com/problemset/problem/344/A
perchè funziona? se grouppo parte da zero ?
*/

# include <stdio.h>

int main(){ 
    int n, i, group=0;
    int mag[100003];
    printf("%d", group);

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &mag[i]);
    }

    for(i=0; i<n; i++){
        if(mag[i]!=mag[i+1]){
            group++;
        }
    }
    printf("%d", group);
}