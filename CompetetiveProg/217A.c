/*CF Problem found here:
https://codeforces.com/problemset/problem/271/A
Cosa ho imaparato ?

la forma while(1){}break; IS BAD DON'T USE it
instead usa do while che è più facilmente mantinibile.
isolare e poi confrontare i numeri devo capire che i cardini matematicamente sono espressi in questo modo 
(a x 1000) + (b x 100) + (c x 10) + (d)
da qui posso isolari e confrontarli con il modulo.
Importantissimo nella forma do (while) la condizione deve essere negata!! 
*/

# include <stdio.h>



int main(){
    int n, a, b, c, d;
    scanf("%d", &n);
    do{
        n = n+1;
        a = n / 1000;
        b = (n / 100) % 10;
        c = (n / 10) % 10;
        d = n % 10;

    } while(!(a != b && a != c && a != d && b != c && b != d && c != d)); // false X false == true                  
/* la condizione con i or è soddisfatta ? <--------<          
No; allora falso X falso = il while rimane true    ^
la la condizione con i or è soddisfatta ? ---------^
Si: allora vero X falso == FALSO !!
e per cio termina l'esecuzione!
*/
    printf("%d", n);
}


   /* while(1){
        n += 1;
         a = n / 1000;
         b = (n / 100) % 10;
         c = (n / 10) % 10;
         d = n % 10;
         if(a != b && a != c && a != d && b != c && b != d && c != d){
            break;
         }
    }
    printf("%d\n", n);
*/

/*bool digitsAreDistinct(int Num){
    int numArr[4];

    for(i=0; i<4; i++){
       numArr[i] = n%10;
       n = n/10;
    }

    return true;

    

}
*/
/*
int main(){
    int n, i, j;
    int res;
    int numArr[4];
    scanf("%d", &n);

    for(i=0; i<4; i++){
       numArr[i] = n%10;
       n = n/10;
    }
    for(i=0; i<4; i++){
        for(j=1; j<4; j++){
            if(numArr[i]==numArr[j]){
                res = 1;
            }
            else{
                res = 0;
            }
        }

    }
    printf("%d", res);

*/
 //   printf("input: %d\n", numArr[i]); // N IS SOOO CUCKED bro.

    // for(i=0; i<4; i++){
    //     printf("%d", numArr[i]);
    // }

    // if(s[i] == s[i+1] == s[i+2] )

    // if(n%10==3){
    //     printf("YES\n");
    //     n = n/10;
    // }
    // res = n%100;
    // printf("modulo 100 is: %d", res);

    
