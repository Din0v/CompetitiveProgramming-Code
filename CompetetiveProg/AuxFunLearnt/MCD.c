/*Massimo Commun Divisore
da Matematica discreta 

questo algoritmo termina SEMPRE perche il dividendo è più piccolo dopo ogni iterazione  
ed il resto NON può essere negativo.

*/

int MCD(int a, int b){
    if (b>a){
        // si cambiano i valori di a e b
    }

    while(b!=0){
        r := a%b; 
        a := b
        b := r
    }

    return a;
}
