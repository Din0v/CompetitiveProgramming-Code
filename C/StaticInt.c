# include <stdio.h>

// it preserves it's value even out of it's SCOPE!!
int fun(){
    static int count = 0; 
    count ++;
    return count;
}

int fun1(){
    int count1 = 0; 
    count1 ++;
    return count1;
}

void main(){
    printf("\n Static \n");
    printf("%d ",fun());
    printf("%d ",fun());
    printf("\n Dynamic \n");
    printf("%d ",fun1());
    printf("%d ",fun1());
}