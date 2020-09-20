#include <stdio.h>

void main()
{
  printf("\n\t\tProgram to determine the prime factorization of a given integer number.");

  int num, mult, factor;
  printf("\nEnter the number: ");
  scanf("%d", &num);

  factor = 2;

  while (num > 1)
  {
    mult = 0;
    while (num % factor == 0)
    {
      mult++;
      num /= factor;
    }
    if (mult != 0)
    {
      printf("\n factor %d multiplicity %d", factor, mult);
    }
    factor++;
  }
}

// ORIGINAL SOLUTION
// /* 
//  * SOLUCAO. simples, curta e grossa 
//  * 
//  */

// #include <stdio.h>

// int main()
// {
//   int n;       /* numero dado */
//   int fator;   /* candidato a fator do numero dado */
//   int mult;    /* multiplicidade de fator */


//   printf("Decomponho um numero dado em fatores primos.\n");
//   printf("Entre com o numero (> 1) a ser decomposto: ");
//   scanf("%d", &n);
//   printf("Decomposicao de %d em fatores primos:\n", n);  

//   fator = 2;
//   while (n > 1) 
//     {
//       mult = 0;
//       while (n % fator == 0) 
//         {
//           mult ++;
//           n = n / fator; 
//         }
//       if (mult != 0) 
//         {
//           printf("  fator %d multiplicidade %d\n", fator, mult); 
//         }
//       fator++; 
//     }

//   return 0;
// }
