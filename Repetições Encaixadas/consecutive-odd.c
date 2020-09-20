#include <stdio.h>

void main()
{
  printf("\n\t\t Given an aleatory number M, the program will determine the consecutive odd numbers wich sum is equal to n^3 for n assuming values from 1 to M.");

  int m, n, i, odd;

  printf("\nEnter the number M: ");
  scanf("%d", &m);

  odd = 1;
  for (n = 1; n <= m; n++)
  {
    printf("\n%d^3 = %d*%d*%d = %d", n, n, n, n, odd);

    for (i = 1; i < n; i++)
      printf("+%d", odd + 2 * i);
    odd = odd + 2 * n;
  }
}

//ORIGINAL SOLUTIONS
/*
 * SOLUCAO 1
 */

// #include <stdio.h>

// int main() {
//   int n, m, i, inicio, soma;

//   printf("Digite o valor de m: ");
//   scanf("%d", &m);

//   for (n = 1; n <= m; n++) {
//     soma = 0;
//     for (inicio = 1; soma != n * n * n; inicio = inicio + 2) {
//       soma = 0;
//       for (i = 0; i < n; i++)
// 	soma = soma + inicio + 2 * i;
//     }
//     inicio = inicio - 2;
//     printf("%d*%d*%d = %d", n, n, n, inicio);
//     for (i = 1; i < n; i++)
//       printf("+%d", inicio+2*i);
//     printf("\n");
//   }

//   return 0;
// }

/*
 * SOLUCAO 2
 */

// #include <stdio.h>

// int main() {
//   int m,        /* dado de entrada */
//       n, i,
//       inicio;   /* primeiro dos impares de uma sequencia que soma n^3 */

//   printf("Digite o valor de m: ");
//   scanf("%d", &m);

//   inicio = 1;
//   for (n = 1; n <= m; n++) {
//     printf("%d*%d*%d = %d", n, n, n, inicio);
//     for (i = 1; i < n; i++)
//       printf("+%d", inicio + 2 * i);
//     inicio = inicio + 2 * n;           /* inicio da proxima sequencia */
//     printf("\n");
//   }

//   return 0;
// }