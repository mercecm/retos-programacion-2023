/*
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */
#include <stdio.h>

int main(void){
 for (int i=1; i<=100; i++)
 {
  if (i%15 == 0 ){
   printf("fizzbuzz \n");
  }
  else if (i%3 == 0){
    printf("fizz \n");
  }
  else if (i%5 == 0){
   printf("buzz \n");
  }
  else{
    printf("%u \n", i);
  }
 }
 return 0; 
}

