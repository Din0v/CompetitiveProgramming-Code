# include <stdio.h>

int divsione();
int TrovaPrimo();

int main(){
    int Raqam = 4;

    if (TrovaPrimo(Raqam)){printf("TROVATOOO");}
    else {printf("Niente, Non è primo");}

}

int TrovaPrimo(int O){
    int division;
     if (O == 1) return 1;

    for(division = 2; division<O; division++){
        if(divsione(O, division))
            return 1;
        else    
            return 0;
    }
}

int divsione(int z, int r){
    if (z%r==0) return 1;  
}