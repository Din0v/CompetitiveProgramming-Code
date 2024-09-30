/*CF problem 208A found here: 
https://codeforces.com/problemset/problem/208/A

cosa ho imaparto ?
che per fare il truccetto della aritmetica dei puntatori ed non andare al di fouri dell Array posso utilizzare la formula di NomeArray[i] != 'L'ultimo carattere' 
e così non si finisce a leggere dalla memoria al di fuori dell array stesso!!

*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){
    char Remix[201];
    
    scanf("%s", Remix);
    int s = strlen(Remix);
    int i;
    for(i=0; Remix[i] != '\0'; i++){
        if(Remix[i]=='W' && Remix[i+1] =='U' && Remix[i+2] == 'B'){ 
        Remix[i] = ' ';
        Remix[i+1] = ' ';
        Remix[i+2] = ' ';
        }
    }
    printf("\n%s", Remix);
}