# include <stdio.h>

int x= 1;

int g(int y) {
    return ++x + y;
}
// usendo da questa funzione La variabile globale diventa 2, incrementando di 1
// poi invocata di nuovo dalla Funzione F x viene assunta come 2. 

int f(int x){
    int z = x;
         {
            int x = g(z);
            return (x + 1);
         }

}

int main() {
    printf("this is the first x %d\n", x);
    
    int q = g(0);
    printf("this is the value of g %d \n", q); 
    // x viene incrementata di uno dopo questo passaggio. 

    int a = f(0);
    printf ("this is A %d \n", a);
}