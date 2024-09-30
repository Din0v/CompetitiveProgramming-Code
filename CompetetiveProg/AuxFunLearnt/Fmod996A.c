/*Relativo al problem 996A di Codeforces di programmazione dinamica
in python funzionava il fatto di usare il modulo % con dei float mentre in C non andava è questa è la solutzione !!
*/
#include <stdio.h>
#include <math.h>

int main() {
  float a = 11.5;
  float b = 3.2;
  
  float remainder = fmod(a, b);
  printf("Il resto della divisione di %f per %f è %f\n", a, b, remainder);
  
  return 0;
}