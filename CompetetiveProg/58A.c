/*Cf Problem 58A found here:
https://codeforces.com/problemset/problem/58/A
*/
/*
#include <stdio.h>
#include <string.h>


int main(){
    int i, cardineIndex;
    int countH = 0, countE = 0, countL = 0, countO = 0;
    char s[103];
    char hello[4];
    scanf("%s", s);

    for(i=0; i<100; i++){
        if(s[i]=='h'){
         hello[0] = s[i];
            countH++;
        }
        else if(s[i] == 'e'){
         hello[1] = s[i];
            countE++;
        }
        else if(s[i] == 'l'){
         hello[2] = s[i];
         countL++;
        }
        else if(s[i] == 'l'){
         hello[3] = s[i];
         countL++;
        }
        else if(s[i] == 'o'){
         hello[4] = s[i];
            countO++;
        }
        
        

    }

    if (countE ==1 && countH == 1 && countO == 1 && countL == 2)
        printf("\nyes\n");
    printf("%d, %d\n", countH, countE);
    
    for(i=0; i<6; i++){
        printf("%c", hello[i]);
    }
}
*/
// solution found here: https://cfsoln.blogspot.com/2020/01/codeforces-58a-chat-room-solution-in-c.html
    #include<stdio.h>

    #include<string.h>

    int main()

    {

          int i,n,l=0;

          char a[120];

          scanf("%s",a);

          n=strlen(a);

          for (i=0;i<n;i++)

          {

                if (a[i]=='h' && l==0) l++;

                else if (a[i]=='e' && l==1) l++;

                else if (a[i]=='l' && l==2) l++;

                else if (a[i]=='l' && l==3) l++;

                else if (a[i]=='o' && l==4) l++;

                if (l==5) break;

          }

          if (l==5) printf("YES\n");

          else printf("NO\n");

          return 0;

    }

