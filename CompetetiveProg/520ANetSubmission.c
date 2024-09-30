#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    int size;
    scanf("%d", &size);
    char str[size];
    scanf("%s", str);
    
    for(int i=0; i<strlen(str); i++){
        str[i] = tolower(str[i]);
    }
 
    int alphabets_count[26] = {0};
    for(int i = 0; i<strlen(str); i++){
        if((str[i] >= 'a' && str[i] <= 'z')){
            int val = str[i] - 'a';
            alphabets_count[val]++;
        }
    }
    int contains_all = 1;
    for(int i = 0; i<26; i++){
        if(alphabets_count[i] == 0){
            contains_all = 0;
            break;
        }
    }

    if(contains_all){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
