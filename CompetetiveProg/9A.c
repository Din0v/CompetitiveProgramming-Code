/* problem codeforces nr.9 Die roll for bigger numbers found here:
https://codeforces.com/problemset/problem/9/A
soluzione molto tamarra ed è questa: 

i can include math.h and use Absolute value but i didn't. 

here it's a very simple way to do the logic, albeit a bit wrong lmao. 

the only takeaway here is that i revised how to use and assign the ternary operator ? 

l'assegnamento si fa prima di invocare l'operatore e le parentesi !!!

*/


#include <stdio.h>

int main(){
    int y, w, a, res; 
    scanf("%d %d", &w, &y);

    res = (y>w)?y:w; 

    a = 6 - res;

    if(a == 0){
        printf("1/6");
    }

    else if(a == 1){
        printf("1/3");
    }

    else if(a == 2){
        printf("1/2");
    }

    else if(a == 3){
        printf("2/3");
    }

    else if(a == 4){
        printf("5/6");
    }
    else if(a == 5){
        printf("1/1");
    }

}