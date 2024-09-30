/*CF 61A.c Ultra fast mathmatician found here:
https://codeforces.com/problemset/problem/61/A
cosa ho imparato ?*/

#include <stdio.h>
#include <string.h>

int main(){
    int n, i, s1, s3;
    char str1[103];
    char str2[103];
//     char res[103];
    
    scanf("%s", &str1);
    scanf("%s", &str2);
//     // fgets(str1, 103, stdin);
//     // fgets(str2, 103, stdin);
    s1 = strlen(str1);
//   //  printf("%d", s1);

//     for(i=0; i<s1; i++){
//         if(str1[i]==str2[i]){
//             res[i] = 0;
//        //     printf("1");
//         }
//         else{
//             res[i] = 1;
//         }
//     }
//      printf("%s", res);
// 
    for(i=0; i<s1; i++){
        if(str1[i]==str2[i]){
            printf("0");
        }
        else{
            printf("1");
        }
    }

}
