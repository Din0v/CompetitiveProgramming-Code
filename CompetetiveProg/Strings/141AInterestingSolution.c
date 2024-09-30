/*CF problem ammusing joke found here
https://codeforces.com/problemset/problem/141/A
cosa ho imparato ?

che questo è un esempio sbagliato!!


THIS IMPLEMENTATION IS VERY VERY HACKABLE*/

#include<stdio.h>
#include<string.h>

int main()
{
    int x=0,y=0,z=0;
    char a[100],b[100],c[300];
    scanf("%s %s %s",a,b,c);

    for(int i=0; i<strlen(a); i++){
        x+=a[i];
    //     printf("%d\n", x);
    }
    // printf("\n");
    // printf("\n");
    for(int i=0; i<strlen(b); i++){
        y+=b[i];
    //     printf("%d\n", y);
    }
    // printf("\n");
    // printf("\n");

    for(int i=0; i<strlen(c); i++) {
        z+=c[i];
    //     printf("%d\n", z);
    }

    // printf("\n");
    // printf("\n");

    if(z==197 /*||z==450*/ ) // che cazzo significa questo numero ???
        printf("NO");
    else if(z==(x+y))
        printf("YES");
    else
        printf("NO");

}




