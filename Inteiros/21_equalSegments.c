#include <stdio.h>

void main(){
  printf("\t\tProgram that returns how many segments of equal numbers are in the sequence");

  int counter = 0, amount = 0, i;

  printf("\nEnter how many numbers are in the sequence: ");
  scanf("%d", &amount);

  int sequence[amount];

  printf("Enter the sequence of %d numbers: ", amount);
  
  for(i = 0; i < amount; i++){
  scanf("%d", &sequence[i]);
  }

  for(i = 0; i < amount; i++){
    if(sequence[i] != sequence[i + 1]){
      counter++;
    }
  }

  printf("\nThere are %d consecutive equal number segments", counter);
}

//ORIGINAL SOLUTION
// /* Programa que conta segmentos de numeros iguais */

// #include <stdio.h>

// int main() {
//   int n,         /* comprimento da sequencia                               */
//       i,         /* contador de numeros da sequencia lidos                 */
//       atual,     /* ultimo numero da sequencia lido                        */
//       anterior,  /* numero anterior da sequencia                           */
//       cont;      /* quantidade de segmentos de numeros iguais na sequencia */ 

//   printf("Digite o numero de elementos da sequencia: ");
//   scanf("%d",&n);

//   printf("Digite uma sequencia com %d numeros inteiros: ", n);

//   /* inicializacoes */
//   scanf("%d", &anterior);   /* anterior comeca com o primeiro da sequencia */
//   cont = 1;                 /* inicialmente temos um segmento              */

//   for (i = 2; i <= n; i++) {
//     scanf("%d", &atual);    /* proximo da sequencia                        */
//     if (atual != anterior){  
//       cont = cont + 1;      /* comecou um novo segmento de numeros iguais  */
//       anterior = atual;
//     }
//   }
//   printf("Quantidade de segmentos de numeros iguais da sequencia = %d\n", cont);

//   return 0;
// }

