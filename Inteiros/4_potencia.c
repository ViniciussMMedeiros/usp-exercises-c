#include <stdio.h>
#include <stdlib.h>

int main(){
  int numBase, numPow, counter = 0, potencia = 1;
  printf("\t\tPrograma que le a base e o expoente, calculando a potencia.");

  printf("\n\nDigite o valor da base: ");
  scanf("%d", &numBase);

  printf("Digite o valor do expoente: ");
  scanf("%d", &numPow);

  while(counter != numPow){
    potencia = potencia*numBase;
    counter++;
  }

  printf("O resultado de %d elevado a %d eh: %d", numBase, numPow, potencia);

  return 0;
}

//SOLUÇÃO ORIGINAL 
// #include <stdio.h>

// int main() {
//   int x,        /* base                         */ 
//       n,        /* expoente                     */
//       potencia, /* guarda as potencias parciais */ 
//       contador; 
  
//   printf("\n\tCalculo de potencias\n");
//   printf("\nDigite um numero inteiro: ");
//   scanf("%d", &x);
//   printf("Digite um numero um inteiro nao-negativo: ");
//   scanf("%d", &n);
  
//   /* Inicializacoes */
//   potencia = 1;
//   contador = 0;
  
//   /* Calculo da potencia */
//   while (contador != n) {
//     potencia = potencia * x;
//     contador = contador + 1;
//   }
  
//   printf("\nO valor de %d elevado a %d: %d\n", x, n, potencia);
//   return 0;
// }


//SOLUÇÃO COM ERRO COMUM
// #include <stdio.h>

// int main() {
//   int x,         /* base                          */ 
//       n,         /* expoente                      */
//       i;         /* numero de multiplicoes feitas */

//   /* Inicializacoes */
//   printf("\n\tCalculo de potencias\n");
//   printf("Digite a base (inteiro): ");
//   scanf("%d", &x);
//   printf("Digite o expoente (inteiro nao-negativo): ");
//   scanf("%d", &n);
  
//   i = 0;
  
//   /* Calculo da potencia */
//   while (i < n) {
//     x = x * x;
//     i = i + 1;
//   }
  
//   printf("\nO valor de %d elevado a %d= %d\n", x, n, x);
//   return 0;
// }
