/*Cf prob of plugging the + or * operand to get the biggest result without swapping
found here:
https://codeforces.com/problemset/problem/479/A

*/

#include <stdio.h>

/*la soluzione attuale è sbagliata perchè non rispetta il cardine dei numeri.*/
int main(){
    int a , b, c, i, t, max;
    int res[6];

    scanf("%d %d %d", &a, &b, &c);
    res[0] = a+(b*c);
    res[1] = a*(b+c);
    res[2] = (a*b)+c;
    res[3] = (a+b)*c;
    res[4] = a+b+c;
    res[5] = a*b*c; 
    
    max = res[0];
    
    for(i=1;i<6;i++){
        if(max<res[i]){
            t = max; // il temporaneo = max
            max = res[i]; // il nuovo massimo;
            res[i] = t; // 
        }
    }

    printf("%d", max);

    
// this is so retarded way of comparing numbers; USE THE MAX IN AN ARRAY!!!!
// this is very stupiiiiid


    // if(tmp1>tmp2 && tmp1>tmp3 && tmp1>tmp4 && tmp1>tmp5){
    // printf("%d", tmp1);
    // }
    // else if(tmp2>tmp3 && tmp2>tmp4 && tmp2>tmp5){
    // printf("%d", tmp2);
    // }
    // else if(tmp3>tmp4 && tmp3>tmp5){
    // printf("%d", tmp3);
    // }
    // else if(tmp4>tmp5){
    // printf("%d", tmp4);
    // }
    // else{
    // printf("%d", tmp5);
    // }



    // if(a+b < a*b)
    //     tmp = a*b;
    // else{
    //     tmp = a+b;
    // }

    // if(b+c < b*c)
    //     tmp2 = b*c;
    // else{
    //     tmp2 = b+c;
    // }

    // if(tmp > tmp2){
    //    res = tmp * c;
    // }
    // else{
    //    res = tmp2 * a;
    // }

  //  printf("%d", res);

}   