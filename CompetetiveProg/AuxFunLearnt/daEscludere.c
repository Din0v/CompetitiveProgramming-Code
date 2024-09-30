#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char daEscludere[101];
fgets(daEscludere, 101, stdin);

int i, l;
l = strlen(daEscludere);
for(i=0; i<l; i++){
	if(daEscludere[i]!= 'a' && daEscludere[i]!='A'){
	printf("%c", daEscludere[i]);
	}
}
}