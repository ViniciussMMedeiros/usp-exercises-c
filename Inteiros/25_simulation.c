//SIMULATION OF THE PROGRAM BELOW (ORIGINAL PROGRAM PROVIDED)

#include <stdio.h>

int main()
{
  int a, b, total, soma, termo, i;

  printf("Digite um par de numeros: ");
  scanf("%d %d", &a, &b);
  printf("(%d, %d)\n", a, b);
  total = 0; 
  soma  = 0;
  while (a != 0) { 
    total = total + 1; 
    termo = 1;
    for (i = 1; i <= b; i++)
      termo = termo * a;
    printf("Resp = %d\n", termo);
    soma = soma + termo;
    printf("Soma = %d\n", soma);
    printf("Digite um par de numeros: ");
    scanf("%d %d", &a, &b);
    printf("(%d, %d)\n", a, b);
  }
  printf("Total de pares: %d\n", total);
  return 0;
}

/* 
This code does not reset the variables, so each result will sum to the last one...

for 2 3 we have...
2 ^ 3 = 8
1 = 1 * 2 = 2 // 2 = 2 * 2 = 4 // 4 = 4 * 2 = 8 
Result 8 8

for 5 2 we have...
5 ^ 2 = 25
1 = 1 * 5 = 5 // 5 = 5 * 5 = 25
Result would be 25 25, but the sum is already 8, so we have 25 + 8 = 33
Result 25 33

for 7 1
7 ^ 1 = 7
1 = 1 * 7 = 7
Result would be 7 7, but the sum is already 33, so we have 33 + 7 = 40
Result 7 40

The entry 0 5 doesn't return anything because a is equal to 0, not matching the while (a != 0) requirement.

*/


//ORIGINAL SOLUTION (OUTPUT)
// Digite um par de numeros: 2 3
// (2, 3)
// Resp = 8
// Soma = 8
// Digite um par de numeros: 5 2
// (5, 2)
// Resp = 25
// Soma = 33
// Digite um par de numeros: 7 1
// (7, 1)
// Resp = 7
// Soma = 40
// Digite um par de numeros: 0 5
// (0, 5)
// Total de pares: 3