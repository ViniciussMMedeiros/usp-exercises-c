#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, i;
  printf("\tPrograma para imprimir os quadrados de uma sequência numérica.");
  printf("\n\nDigite a sequência de números, com espaços e 0 para finalizar: ");
  scanf("%d", &num);
  while(num != 0){
    printf("\nO quadrado do numero %d eh: %d", num, num*num);
    scanf("%d", &num); // !!!!!!!!!DIFERENTE USO DO SCANF, DENTRO DO WHILE CONSEGUE LER O RESTANTE DAS ENTRADAS!!!!!!!!!
  }
  return 0;
}

// SOLUÇÃO ORIGINAL
// #include <stdio.h>

// int main() {
//   int numero,     /* usada para leitura da sequencia  */
//       quadrado;   /* guarda o quadrado do numero lido */
  
//   printf("\n\tCalculo dos quadrados de uma sequencia de numeros\n");
//   printf("\nEntre com uma sequencia de numeros inteiros nao-nulos, seguida por 0:\n");
//   scanf("%d", &numero);
  
//   while (numero != 0) {
//     quadrado = numero * numero;
//     printf("O quadrado do numero %d e' %d\n", numero, quadrado);
//     scanf("%d", &numero);
//   }
//   return 0;
// }