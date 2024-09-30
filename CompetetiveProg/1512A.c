/*CF problem 1512A si trova qui:
https://codeforces.com/problemset/problem/1512/A
qui sarabbe oppurtuno fare una funzione che prenda in input le funzione da elaborare 

*/

// #include <stdio.h>

// // int TrovaIntruso(int size, int *arr){

// // }

// int main(){

//     int t, a, i;
//     int arr[102];

//     // scanf("%d", &t);

    
//     scanf("%d", &a);
//     for(i=0; i<a; i++){
//         scanf("%d", &arr[i]);
//     }
//     // for(i=0; i<a; i++){
//     //     printf("%d ", arr[i+1]);
//     // }
//     for(i=0; i<a-1; i++){
//         if(arr[i]!=arr[i+1] && arr[i+1]==arr[i+2]){
//             printf("%d ", i+1);
//         }
    
//     }


// }


// Soluzione senza Array

    #include<stdio.h>
    int main()
    {
        int t,n,i,flag=0,a,b;
    	scanf("%d",&t);
    	while(t--) // l'espressione che valuta i test case
    	{   
            // l'idea di questa soluzione, è quella di usare l'input come parte del elaborazione!

    		int sum=0; 
    		scanf("%d",&n); // la lunghezza del array
    		scanf("%d",&a); // primo elemento del array.
    		for(i=2;i<=n;i++)
    		{
    			scanf("%d",&b);
    			if(a!=b)
    			{
    				sum++;
    				flag=i; // può essere uno o due 
    			}
    		}
    		if(sum==1)
    		printf("%d\n",flag);
    		else
    		printf("1\n");
    	}
        return 0;
    }

