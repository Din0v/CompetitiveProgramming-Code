/*Translation 41A.c Found here:
https://codeforces.com/problemset/problem/41/A
Cosa Ho imparato? 
It should be a simple matter of index swapping 
And it would be a very nice idea to use functions here just to confirm that two Char arrays are equal!!
little did i know
è STATA UNA CAZZO DI MATTANZA

https://coding4good.wordpress.com/2020/05/30/codeforces-solution-translation/

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// int CompareBirBerLang(*char1 A, *char2 B){

//     return 1; 

// }
char *strrev(char *str)
{
    if (!str || ! *str)
        return str;

    int i = strlen(str) - 1, j = 0;

    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

int main(){
    int i, res;
    char s[103];
    char t[103];


    scanf("%s", s);
    scanf("%s", t);
    // fgets(s, 103, stdin);
    // fgets(t, 103, stdin);
    
    // printf("\nBeforeConversion\n");
    // for(i=0; i<100; i++){
    //    printf("%c", s[i]);
    // }

    strrev(t) ;

    // printf("\nAfterConversion\n");
    // for(i=0; i<100; i++){
    //    printf("%c", s[i]);
    // }

    res = strcmp(s, t);
    if( res == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

}



/*
    //Dato che sono della stessa lunghezza Quindi sei un po' pedante a fare questa distinzione -_-
    lenS = strlen(s);
    lenT = strlen(t);
    for(i=0; i<=lenS; i++){
       Temp[i] = s[lenS-i] ;
    }

    for(i=lenS; i>=0; i--){
       printf("%c", Temp[i]);
    }
    
    int res = strcmp(s, Temp);
    if( res == 0){
        printf("YES \n");
    }
    else if (res > 0){
        printf("NO \n");
    }

    
}
//  for(i=lenS; i>=0; i--){
//         printf("%c", s[i]);
//     }}

*/