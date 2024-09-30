void f(int x, int b[5][5]){
    int i; 

    if(x > 0){
        int a[5][5];
        for (i=0; i<5; ++i){
            int j;
            for (j=0; j<5; ++j)
                a[i][j] = b[j][i];
        }
    }

    else{
        for (i=0; i<5; ++i){
            int j;
            for( j=0; j<5; ++j)
            b[i][j] = 0;
        }
    }
}

int main(){
    int a[5][5];
    int n = 4;
    f(n, a);
    return 0;
}