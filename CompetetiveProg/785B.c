/*CF found here: 
https://codeforces.com/problemset/problem/785/A
seems it's like pretty straight forward
cosa ho imparato ? 
ci servirà un array bi dimensionale per immagazinare l'input della matrice */

#include <stdio.h>
#include <string.h>
# include <stdlib.h>


int main(){
    int n, i, j, face;

    char tempInput[12];

    char hedron[5][12] = {"Tetrahedron", "Cube", "Octahedron" , "Dodecahedron", "Icosahedron"};

    scanf("%d", &n);
  int sum = 0;
    for(j=1; j<=n; j++){
        scanf("%s\n", &tempInput);
      
        //printf("%s\n", tempInput);

       // printf("FROM ARRAY%s\n", hedron[0]);
        if(strcmp(tempInput, "Tetrahedron")== 0){
            sum = sum + 4;
        }
        else if(strcmp(tempInput, "Cube")==0){
            sum = sum + 6;
        }
        else if(strcmp(tempInput, "Octahedron")== 0){
            sum = sum + 8;
        }
        else if(strcmp(tempInput, "Dodecahedron")== 0){
            sum = sum + 12;
        }
        else if(strcmp(tempInput, "Icosahedron")== 0){
            sum = sum + 20;
        }
        // printf("Array Nr.4 %s \n", hedron[4]);
  
    }

    printf("%d\n", sum);




    

}