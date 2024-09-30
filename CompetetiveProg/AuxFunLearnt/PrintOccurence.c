/* how to find the number of a letter occurance in a string.
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void Print_Occurances(char *s);
void print_occurrences2(char *s);

int main(){

    char s[] = "afdsdfaefasfkjgorewiteimvaxapwqerreweqazcxz";
    Print_Occurances(s);
 //   print_occurrences2(s);

    return 0;
}

void Print_Occurances(char *s)
{
    int length = strlen(s);
    char unique[length];
    int counted = 0; 

    for (int i=0; i < length; i++)
    {
       
       bool already_counted = false;
       for(int j = 0; j < counted; j++)
            if (s[i] == unique[j])
                already_counted = true;
       
       if(already_counted) continue; 
       
        
        int count = 0; 
        for (int j=0; j<length; j++)
            if(s[i] == s[j]) count++;
        
        
    
        printf("%c - %d\n", s[i], count);

        unique[counted] = s[i];
        counted++; 
        
    }  
} 
