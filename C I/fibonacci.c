#include <stdio.h>

int main() {
  int a, b, auxiliar, i;
  a = 0;
  b = 1;

  for(i = 1; i <= 30; i++) {
  	auxiliar = a + b;
  	a = b;
  	b = auxiliar;
  	printf("Fibonacci %d: %d\n", i, auxiliar );
  }

}