/*word capitalization check it here: 
https://codeforces.com/problemset/problem/281/A
i need to capitalize and manipulate only the first letter!
seems similar to petya strings*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char wordA[1005];

    fgets(wordA, 1003, stdin);

    wordA[0]= toupper(wordA[0]);

    printf("%s", wordA);
}
