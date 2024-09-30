/*Limak and Bob bears CF problem that can be found here:
https://codeforces.com/problemset/problem/791/A
the idea is to find the threashold where the smaller input becomes larger than the bigger input, based on the fact that after each iteration A is tripling and B is doubling.
è uno di qui esercizi dove conviene utlizzare il while per la sua semplicità!

*/

#include <stdio.h>


int main(){
    int a, b, i; 
    int count = 0;
    scanf("%d\n", &a);
    scanf("%d", &b);



    while(a<=b){ // nel esercizio viene esplicitamente richieste che deve essere STRETTAMENTE più grande! 
        a = a * 3;
        b = b * 2;
        count++;
    }

    // absolute sad implemetation xD
    // for(i=0; i<10; i++){
    //     a= a*3;
    //     b= b*2;
    //     if(a<b)
    //          count++;
    // }
printf("%d\n", count);
}