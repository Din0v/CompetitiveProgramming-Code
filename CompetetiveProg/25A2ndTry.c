/*https://codeforces.com/problemset/submission/25/154028702
*/

#include <stdio.h>

int main()
{
    // the variabiles
    int n, i, j, temp;
    // the input part
    scanf("%d",&n);
    int List[n];
    for(i=0;i<n;i++) scanf("%d",&List[i]);
    
    // Il succo del codice
    /*
    - si valuta se il primo elemento è divisibile su 2 
    - 
    */
    temp = List[0]%2;
    for(i=0;i<n;i++) {
        if(List[i]%2!=temp){
            break;
        } 
        
    }

    if( (List[1]%2==List[2]%2) && (List[1]%2!=temp)){
        i=0;
    }
    
    printf("%d\n",i+1);
    return 0;
}