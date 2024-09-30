/*CF problem found here distributing candies between two sisters:
https://codeforces.com/problemset/problem/1335/A
cosa ho imparato ?
caso interessante di mappatura della matematica nella realita.
la divisione rappresenta un modo per contare una distribuzione non uguale di spartimenti*/

# include <stdio.h>


int t,n;
int main(){
	scanf("%d",&n); // takes the number of inputs.
	while(n--){
		scanf("%d",&t); // 
		printf("%d\n",(t-1)/2); // (t-1)/2 acconta per il caso 1 dato che 1-1/ 2 == 0 ed inoltre in un solo colpo fa si che alice prende più ciocalatini che bob
        // dato che è un intero approssima verso il valore più grande  quindi il caso 7-1 / 2  == 3 
        // 5-1 / 2 quindi alice prende 4-1 oppure 3-2 che appunto sono due casi 
	}
}


/*
int main(){
    int n, i;
    scanf("%d", &n);
    long long test[10001];

    for(i=0; i<n; i++){
        scanf("%lld", &test[i]);
    }

    for(i=0; i<n; i++){
        test[i] =
    }
    
}
*/