/*A boy or a girl Codeforces Problem 236A that ca be found here:
https://codeforces.com/problemset/problem/236/A:
brief Explanation of what we are going to do: 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int len,i,j,k;
    scanf("%s", str);
    len = strlen(str);
    for(i=0; i<len; i++){
        //printf("%c ", str[i]);
        for(j=i+1; j<len; j++){
            //printf("%c ", str[j]);
            if (str[i] == str[j]){
                for(k=j; k<len; k++){ 
                    str[k] = str[k+1];
                }
                j--;
                len--;
            }
        }
    }

    if (len%2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
}