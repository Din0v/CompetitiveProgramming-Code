/*CF problem found here:
https://codeforces.com/problemset/problem/1358/A
c'è un semplice trucco per arrivare alla formula di (((n * m)+1 )/ 2)

+---+---+---+
|   |   |   |
+---+---+---+
|   |   |   |
+---+---+---+
|   |   |   |
+---+---+---+

In this grid, there are 3 rows and 3 columns. Now, let's count the number of borders along the rows:

    In the first row, there are 3 squares and 4 gaps.
    In the second row, there are 3 squares and 4 gaps.
    In the third row, there are 3 squares and 4 gaps.

therefore we need to add 1 to the equation to account for the number of gaps and repetitions 

DFS relation, depth of first traversal tree!

greedy algorithms and implementation

*/

// #include <stdio.h>

// int main(){

  
//     int t, n, m, res;

//     scanf("%d", &t);

//     while(t--){
//         scanf("%d %d", &n, &m);
         
//         res = ((n*m)+1)/2; // calculates the number of boarders in the grid 
        
//         printf("%d \n", res);

        
//     }
// }

// another better solution 
// argument: 2 *(h - 2) + 2 * (w - 2) + 4)

#include<stdio.h>

void solve(int h, int w) {
   printf("%d \n",  ((h*w)+1)/2);
}
int main() {
    
    int h, w , t;
    scanf("%d", &t);
    while(t--){
    scanf("%d %d", &h, &w);
    solve(h, w);
    }

}