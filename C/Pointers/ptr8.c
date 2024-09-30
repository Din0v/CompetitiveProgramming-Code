#include <stdio.h>
#include <string.h>

void changePosition (char *ch1, char *ch2){

    char tmp; 
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;

}

void charPermu (char *cht, int stno, int endno){
    
    int i; // indice del ciclo 
    
    
    if (stno == endno)  // ??
        printf("\n%s", cht);
    else{
        for(i = stno; i <= endno; i++){
            changePosition((cht+stno), (cht+i));
            charPermu(cht, stno+1, endno);
            changePosition((cht+stno), (cht+i));
        }
    }

}


int main(){

    char str[] = "123";
    printf("Generate permutation of a given string:  \n");
    
    int n = strlen(str);
    printf("the permutations of the string are: \n");
    charPermu(str, 0, n-1);
    printf("\n\n");
    return 0;


}
