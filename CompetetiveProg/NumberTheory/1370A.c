/*CF problema del più grand commun divisore in una lista di doppiette si trova qui:
https://codeforces.com/problemset/problem/1370/A
Cosa ho imparato ? 
- una della soluzioni sembra essere molto "interessante"
Vedi la prova qui:
https://www.youtube.com/watch?v=TIIiwFlhRG0

un altra prova è qui:
https://codeforces.com/blog/entry/79107

*/

# include <stdio.h>

// la mia soluzione proposta inizialmente è complessa O(n^2)

// int gcd (int a, int b){} // prototipo Funzione

// int main(){
//     int a
// }

// WTF WHY THIS WORKS !!!
int main(){
    	long int t,n;
    	scanf("%ld",&t);
     
    	while(t--){
    		scanf("%ld",&n);
     
    		printf("%ld\n",n/2);
        }
    	return 0;
    }