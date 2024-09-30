# include <stdio.h>

int divisore (int N, int div){
    return N%div == 0;
}

int primo(int N){
    int div; 

    if (N == 1) return 1; 

    for(div=2; div<N; div++){
        if (divisore(N, div))
            return 0;
        else 
            return 1;
    }

}

int main(){
    int num = 105;
    if (primo(num)) {
        printf("Il numero %d è primo ", num);
    } 
    else 
        printf("Il numero %d NON è primo ", num);
}