/*Soluzione più ottimizata in termini di memoria e spazio in rispetto a quella di cui sono riuscito ad arrivare da solo!
il problema si trova qui:
https://codeforces.com/problemset/problem/734/A
Che appunto Non funziona la parte C kek xD
Okay stranamente funziona nonstante l'input residuo...
l'idea e quella di utilizzare cicli anziché matrici altrimenti si avra un over head maggiore, 
che non è gradito neppure efficente.
la cosa che non ho capito in questa soluzione; qual è la funzione del while ?? 

*/

/* PARTE C 
-------------------------------------------------
*/
#include <stdio.h>

int main(){
    int n, i, CountA, CountD;
    char CarattereDaLeggere;
    
 //  scanf("%d", &n);

    while(scanf("%d\n", &n) == 1){
        CountA = 0;
        CountD = 0;
        // printf("%d\n", n);
        // printf("%d\n", CountA);
        // printf("%d\n", CountD);
        for(i=0; i<=n; i++){
        scanf("%c", &CarattereDaLeggere); // sempre & dato che non è una stringa
            if(CarattereDaLeggere == 'A'){
                CountA++;
            }
            else if(CarattereDaLeggere == 'D'){
                CountD++;
            }
       
        }
        // printf("%d\n", n);
        // printf("%d\n", CountA);
        // printf("%d\n", CountD);

        if(CountA > CountD){
            printf("Anton");
        }
        else if(CountA < CountD){
            printf("Danik");
        }
        else if(CountA == CountD){
            printf("Friendship");
        }
    }
}




/*
-------------------------------------------------------------
*/

/*Parte C++:
--------------------
#include <iostream>
using namespace std;

int main ()
{
    int n,i,a,d;
    char ch;

    while (cin >> n)
    {
        a = 0;
        d = 0;

        for (i=1; i<=n; i++)
        {
            cin >> ch;

            if (ch == 'A')
                a = a + 1;
            else
                d = d + 1;
        }

        if (a > d)
            cout << "Anton" << endl;
        else if (d > a)
            cout << "Danik" << endl;
        else
            cout << "Friendship" << endl;
    }

    return 0;
}
------------
*/