/*CF problem George and accomodation,
found here:
https://codeforces.com/problemset/problem/467/A
cosa ho imparato ?
1- attenzione al testo, alex e george vogliono vivere assime e quindi la capienza deve accomodare due persone!!

2- si confrontano due indici di matrici diverse, anzichè una matrice laddove devo saltellare due passi alla volta!
*/

# include <stdio.h>

int main(){
    int i, n, res=0;
    int room[103], capienza[103];;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %d", &capienza[i], &room[i]);
    }

    for(i=0; i<n; i++)
        if(capienza[i]+1<room[i]){
            res++;
        }

    printf("%d", res);
}