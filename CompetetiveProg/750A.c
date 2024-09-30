/*CF problem of new year programming contest and making it to friends found here:
https://codeforces.com/problemset/problem/750/A
*/

# include <stdio.h>

int main(){
    int n, Time2Party;
    scanf("%d %d", &n, &Time2Party);
    int TimeAvailable=240-Time2Party;
    int Solution=1;
    int ProblemSolved=0;

    while(TimeAvailable-(5*Solution)>=0 && ProblemSolved<n)
    {
        TimeAvailable-=5*Solution;
        ProblemSolved++;
        Solution++;
    }
    printf("%d",ProblemSolved);

}
// int n, t, r;
    // scanf("%d %d", &n, &t);

    // int probTime[10];

    // for(int i = 0; i<n; i++){
    //     r = n * 5 ;
    //     probTime[i+1] = r;

    // }

    // for(int i = 0; i<n; i++){
    //     printf("%d ", probTime[i]);
    // }


