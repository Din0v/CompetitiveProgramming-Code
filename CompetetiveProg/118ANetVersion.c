 #include<stdio.h>
 #include<string.h>
 int main()
 {
 int i,l; // for the loop and the length of the string.
 char s[101]; // la definizione della stringa 
 scanf("%s",s); // l'input
 l=strlen(s); // calcola la lunghezza della stringa per sapere dove fermare il ciclo. 
 
 for(i=0; i<l; i++){
    // se l'indice è uguale a una di queste condizioni itera il ciclo
  if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!='y' && s[i]!='Y'){
   if(s[i]<=90/*'Z'*/) s[i]+=32; //32 is ascii for "space", Oppure è la differenza ascii tra il maiuscolo o il minuscolo 
   printf(".%c",s[i]); // adding something before the format specifier prints it out before each charachter, especially that we are here inside the loop!!
  }
 }
 printf("\n");
 return 0;
 }