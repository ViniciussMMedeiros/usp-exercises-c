/* Programa que conta o numero de segmentos crescentes */

#include <stdio.h>

int main() {
  int n,            /* comprimento da sequencia                 */
      num,          /* um numero da sequencia                   */
      ant,          /* numero anterior da sequencia             */
      comp,         /* comprimento do segmento sendo analisado  */
      compmax,      /* comprimento do segmento crescente maximo */
      i;            /* quantidade de números da sequencia lidos */

  printf("Digite o numero de elementos da sequencia: ");
  scanf("%d", &n);
  printf("Digite uma sequencia com %d numeros inteiros: ", n);

  /* inicializacoes */
  scanf("%d", &ant);    /* ant comeca com o primeiro da sequencia */ 
  comp = 1;            
  compmax = 1;

  for (i = 1; i < n; i++) {
    scanf("%d", &num);
    if (num > ant) {
      printf("\nProgram thinks that %d is bigger than %d", num, ant);
      comp = comp + 1;
      if (compmax < comp)
        compmax = comp;
    }
    else
      comp = 1;        /* comecou um novo segmento crescente */
    ant = num;
  }
  printf("O comprimento do segmento crescente maximo: %d\n", compmax);

  return 0;
}