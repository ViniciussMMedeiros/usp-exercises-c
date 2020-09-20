#include <stdio.h>
#include <stdlib.h>

void main(){
  int numOne, numTwo, remainder;
  printf("\t\tProgram that finds the GCD of two integers by using the Euclidean Algorithm.");
  printf("\nEnter the first integer: ");
  scanf("%d", &numOne);
  printf("Enter the second integer: ");
  scanf("%d", &numTwo);
  
  while(remainder != 0){
    remainder = numOne % numTwo;
    numOne = numTwo;
    numTwo = remainder;
  }

  printf("%d\n", numOne);
}

//ORIGINAL SOLUTION
// #include <stdio.h>

// int main() {
//   int anterior,  
//       atual,
//       resto;
  
//   printf("Digite os dois inteiros positivos: ");
//   scanf("%d  %d" , &anterior, &atual);
//   printf("MDC(%d,%d) = ", anterior, atual);
  
//   resto = atual % anterior; /* Por que nao 'resto = anterior % atual;'? */
//   while (resto != 0) {
//     resto = anterior % atual;
//     anterior = atual;
//     atual = resto;
//   }
  
//   printf("%d\n", anterior);
//   return 0;
// }