/*CodeForces problem 1829A found here: 
https://codeforces.com/problemset/problem/1829/A
e un semplice confronto di indici tra due stringhe una da prendere in input e un altra data !!

*/


# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    while(n--){
        char input[11]; 
        int i, contatore = 0;
        scanf("%s", input);  // non serve l'ampersand !!
        
        char compareTo[]= "codeforces";

        for(i=0; i<10; i++){
            if(compareTo[i] != input[i])
                contatore++;
        }
        printf("%d\n", contatore);
        contatore = 0;
    }
   
}