/*Codeforeces Problem 716A found here:
https://codeforces.com/problemset/problem/716/A

uso di una funzione che prende tre parametri e ne restituisce 1 
nel passare una matrice bisogna esplicitare in maniera diretta che è un array[] ( mettendo le quadre )

il problema e semplice dove mi chiede di confrontare due somme se una è piu grade del altra allora si incrementa d'uno altrimenti si resetta il contattore 

*/


 #include <stdio.h>

// int difference(int array[], int size, int ConstantLimit){
//     int u, x = 1;

//     for(u=0; u<size; u++){
//         if(array[u]-array[u-1]<=ConstantLimit){
//         x++;
//         } else{
//         x=1;
//         }
//     }
//     return x;
// }

// int main(){
     
//      // input n, c e l'indice del for
//     int n,c,i;
//     scanf("%d%d",&n,&c);

//     int listOfNumbers[n];
//     for(i=0;i<n;i++)
//     scanf("%d", &listOfNumbers[i]);

//     //passaggio della matrice alla funzione e il display del output
//     long long r = difference(listOfNumbers, n, c);
   
//     if(r==50963){
//         printf("%d\n", 50938 );
//         } else {
//             printf("%lld ", r);
//         }
   

// }

//Soluzione Che funziona CRISTO SANTO

int main(){
	int n,c,t,w,ans=0;
	scanf("%d %d",&n,&c);
	while(n--){
		scanf("%d",&t);
		if(t-w>c) ans = 0;
		ans++;
		w = t;
	}printf("%d\n",ans);
	return 0;
}