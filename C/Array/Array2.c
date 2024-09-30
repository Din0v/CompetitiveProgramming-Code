#include <stdio.h>
int diag(int M[3][3]){
    int i,j;
    int sum = 0;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            if(i=j)
                sum = sum + M[i][i];
            return sum;

}
int main(){
    
}