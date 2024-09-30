// NON FUNZIONA!!!!! ATTENZIONE
#include <stdio.h>
#include <stdbool.h>

// Funzione che verifica se un numero long long ha un divisore dispari
const char *has_odd_divisor(long long n) {
  // Ciclo che itera sui divisori dispari compresi tra 3 e la radice quadrata di n
  for (long long i = 3;  i <= n; i += 2) {
    // Se n è divisibile per i, restituisce "SI"
    if (n % i == 0) {
      return "SI";
    }
  }
  // Se n non è divisibile per nessun divisore dispari, restituisce "NO"
  return "NO";
}

int main(void) {
  long long n;
  int i, t;
  scanf("%d", &t);
  
  while(t--){
    scanf("%lld", &n);
    printf("%s\n", has_odd_divisor(n));
  }
}
