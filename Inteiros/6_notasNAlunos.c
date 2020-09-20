#include <stdio.h>
#include <stdlib.h>

void main(){
  printf("\tPrograma para encontrar a maior e menor nota dentre os n alunos.");

  int i, alunos;

  printf("\nDigite quanto alunos ha na turma: ");
  scanf("%d", &alunos);

  int notas[alunos];

  for(i = 1; i < alunos+1; i++){
    printf("\n[Aluno %d] Digite a nota: ", i);
    scanf("%d", &notas[i]);
  }

  int maior = notas[1], menor = notas[0];

  for(i = 1; i < alunos+1; i++){
    if(maior < notas[i]){
      maior = notas[i];
    }
    if(menor > notas[i]){
      menor = notas[i];
    }
  }
  printf("A maior nota eh %d e a menor nota eh %d.", maior, menor);
}

// SOLUÇÃO ORIGINAL
// #include <stdio.h>

// int main() {
//   int n,         /* guarda o numero de alunos      */
//       nota,      /* usada para a leitura das notas */
//       contador,  /* numero de notas ja' lidas      */
//       notamaior, /* guarda a maior nota            */
//       notamenor; /* gurada a menor nota            */ 
  
//   printf("\n\tCalculo de maior e menor nota de uma turma\n");
//   printf("\nDigite o numero de alunos: ");
//   scanf("%d", &n);
  
//   /* inicializacoes */
//   contador = 0;
//   notamaior = 0;
//   notamenor = 100;
  
//   while (contador <  n) {
//     printf("Digite uma nota (0 a 100): "); 
//     scanf("%d", ¬a);
//     contador = contador + 1;
//     if (notamaior < nota)
//       notamaior = nota;
//     if (notamenor > nota)
//       notamenor = nota;
//   }
  
//   printf("A maior nota obtida foi: %d\n", notamaior);
//   printf("A menor nota obtida foi: %d\n", notamenor);
  
//   return 0;
// }