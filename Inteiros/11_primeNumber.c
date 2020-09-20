#include <stdio.h>
#include <stdlib.h>

void main(){
  int num, i, counter = 0; 
  printf("\t\tProgram to check if the input by the user is a prime number.");

  printf("\nEnter the number: ");
  scanf("%d", &num);

  for(i = 1; i <= num; i++){
    if(num % i == 0){
      counter++;
    }
  }

  if(counter == 2){
    printf("Is a prime number.");
  }else{
    printf("Isn't a prime number.");
  }
}

//ORIGINAL SOLUTION
/*
 * SOLUCAO 1. Simples, curta e grossa.
 *
 * Observacao.
 *   Um numero inteiro maior que 1 e primo se seus unicos
 *   divisores sao ele mesmo e 1. Assim, 1 nao e' primo.
 */

// #include <stdio.h>

// int main() 
// {
//   int n;       /* candidato a primo           */
//   int divisor; /* candidato a divisor de n    */
//   int cont;    /* conta o numero de divisores positivos de n */
  
//   printf("\n\tTeste de primalidade\n");
//   printf("\nDigite um inteiro: ");
//   scanf("%d", &n);
//   printf ("Candidato a primo = %d\n", n); 

//   /* inicializacoes */
//   cont = 0;

//   /* os candidatos a divisores positivos de n sao 1,2,...,n */
//   for (divisor = 1; divisor <= n; divisor++)
//     {
//       if (n % divisor == 0) 
// 	{
// 	  cont++;
// 	}
//     }

//   printf("O inteiro %d ", n);
//   if (cont == 2)
//     { /* este par de chaves e' superfluo, mas ha' que goste ;-) */
//       printf("e' primo\n");
//     }
//   else
//     {
//       printf("nao e' primo\n");
//     }
//   return 0;
// }

// /* 
//  * SOLUCAO 2. Mais elaborada e eficiente.
//  *     Usa indicador de passagem, a variaval eprimo.
//  *     Ao final do programa vale que eprimo == 0 
//  *     se e somente se o numero dado nao e' primo.
//  * 
//  * Observacao.
//  *   Um numero inteiro maior que 1 e primo se seus unicos
//  *   divisores sao ele mesmo e 1. Assim, 1 nao e' primo.
//  */

// #include <stdio.h>

// int main() 
// {
//   int n;       /* candidato a primo           */
//   int divisor; /* candidato a divisor de n    */
//   int eprimo;  /* indica se n ainda tem chance de ser primo */

//   printf("\n\tTeste de primalidade\n");
//   printf("\nDigite um inteiro: ");
//   scanf("%d", &n);
//   printf ("Candidato a primo = %d\n", n); 

//   /* inicializacoes */
//   if (n <= 1) 
//     { 
//       eprimo = 0; /* nenhum numero <= 1 e' primo */
//     }
//   else
//     {
//       eprimo = 1;  /* o numero e' primo ate que se prove o contrario */
//     }

//   /* os candidatos a divisores positivos de n sao 1,2,...,n/2 */
//   divisor = 2;
//   while (divisor <= n/2 && eprimo == 1)
//     {
//       if (n % divisor == 0) 
// 	{ 
// 	  eprimo = 0; /* n nao e' primo! */
// 	}
//       divisor++;
//     }

//   printf("O inteiro %d ", n);
//   if (eprimo == 1)
//     { 
//       printf("e' primo\n");
//     }
//   else
//     {
//       printf("nao e' primo\n");
//     }
//   return 0;
// }

// /* 
//  * SOLUCAO 3. Identica a SOLUCAO 2. Apenas troca os 0'e e 1's
//  *     por FALSE e TRUE, repectivamente.
//  * 
//  * Observacao.
//  *   Um numero inteiro maior que 1 e primo se seus unicos
//  *   divisores sao ele mesmo e 1. Assim, 1 nao e' primo.
//  */

// #include <stdio.h>
// #define FALSE 0 
// #define TRUE  1

// int main() 
// {
//   int n;       /* candidato a primo           */
//   int divisor; /* candidato a divisor de n    */
//   int eprimo;  /* indica se n ainda tem chance de ser primo */

//   printf("\n\tTeste de primalidade\n");
//   printf("\nDigite um inteiro: ");
//   scanf("%d", &n);
//   printf ("Candidato a primo = %d\n", n); 

//   /* inicializacoes */
//   if (n <= 1) 
//     { 
//       eprimo = FALSE; /* nenhum numero <= 1 e' primo */
//     }
//   else
//     {
//       eprimo = TRUE;  /* o numero e' primo ate que se prove o contrario */
//     }

//   /* os candidatos a divisores positivos de n sao 1,2,...,n/2 */
//   divisor = 2;
//   while (divisor <= n/2 && eprimo == 1)
//     {
//       if (n % divisor == 0) 
// 	{ 
// 	  eprimo = FALSE; /* n nao e' primo! */
// 	}
//       divisor++;
//     }

//   printf("O inteiro %d ", n);
//   if (eprimo == TRUE)
//     { 
//       printf("e' primo\n");
//     }
//   else
//     {
//       printf("nao e' primo\n");
//     }
//   return 0;
// }

// /* 
//  * SOLUCAO 4. Um pouco mais eficinte que as versoes anteriores.
//  *     Testa se o numero e par fora do laco principal.
//  *     Dentro do while so testa candidados a divisores impares.
//  * 
//  * Observacao.
//  *   Um numero inteiro maior que 1 e primo se seus unicos
//  *   divisores sao ele mesmo e 1. Assim, 1 nao e' primo.
//  */

// #include <stdio.h>
// #define FALSE 0
// #define TRUE  1

// int main() 
// {
//   int n;       /* candidato a primo           */
//   int divisor; /* candidato a divisor de n    */
//   int eprimo;  /* indica se n ainda tem chance de ser primo */

//   printf("\n\tTeste de primalidade\n");
//   printf("\nDigite um inteiro: ");
//   scanf("%d", &n);
//   printf ("Candidato a primo = %d\n", n); 

//   /* inicializacoes */
//   if (n <= 1)
//     {                
//       eprimo = FALSE; /* nenhum numero <= 1 e' primo */
//     }
//   else 
//     {
//       if (n != 2 && n % 2 == 0)
//         {
//           eprimo = FALSE; /* nenhum numero par > 2 e' primo */
//         }
//       else
//         { /* vale que n e' um impar maior que 1 ou e' 2 */
// 	  eprimo = TRUE;  /* o numero e' primo ate que se prove o contrario */
//         }
//     }

//   /* os candidatos a divisores positivos de n sao 3,5,7,...,n/2 */
//   divisor = 3;
//   while (divisor <= n/2 && eprimo == 1)
//     {
//       if (n % divisor == 0) 
// 	{ 
// 	  eprimo = FALSE; /* n nao e' primo! */
// 	}
//       divisor = divisor + 2;
//     }

//   printf("O inteiro %d ", n);
//   if (eprimo == TRUE)
//     { 
//       printf("e' primo\n");
//     }
//   else
//     {
//       printf("nao e' primo\n");
//     }
//   return 0;
// }

// /* 
//  * SOLUCAO 5. Uma SOLUCAO um pouco mais compacta da SOLUCAO 4.
//  *     Usa comando for e a abreviatura += 
//  * 
//  * Observacao.
//  *   Um numero inteiro maior que 1 e primo se seus unicos
//  *   divisores sao ele mesmo e 1. Assim, 1 nao e' primo.
//  */

// #include <stdio.h>
// #define FALSE 0
// #define TRUE  1

// int main() 
// {
//   int n;       /* candidato a primo           */
//   int divisor; /* candidato a divisor de n    */
//   int eprimo;  /* indica se n ainda tem chance de ser primo */

//   printf("\n\tTeste de primalidade\n");
//   printf("\nDigite um inteiro: ");
//   scanf("%d", &n);
//   printf ("Candidato a primo = %d\n", n); 

//   /* inicializacoes */
//   if (n <= 1 || (n != 2 && n % 2 == 0))
//     {                
//       eprimo = FALSE; /* nenhum numero inteiro <= 1 ou par > 2 e' primo */
//     }
//   else 
//     {
//       eprimo = TRUE;  /* o numero e' primo ate que se prove o contrario */
//     }

//   /* os candidatos a divisores positivos de n sao 3,5,7,...,n/2 */
//   for (divisor = 3; divisor <= n/2 && eprimo == 1; divisor += 2)
//     {
//       if (n % divisor == 0) 
// 	{ 
// 	  eprimo = FALSE; /* n nao e' primo! */
// 	}
//     }

//   printf("O inteiro %d ", n);
//   if (eprimo == TRUE)
//     { 
//       printf("e' primo\n");
//     }
//   else
//     {
//       printf("nao e' primo\n");
//     }
//   return 0;
// }

// /* 
//  * SOLUCAO 6. Igual a SOLUCAO 5 depois de remover os parenteses superfluos.
//  * 
//  * Observacao.
//  *   Um numero inteiro maior que 1 e primo se seus unicos
//  *   divisores sao ele mesmo e 1. Assim, 1 nao e' primo.
//  */

// #include <stdio.h>

// #define FALSE 0
// #define TRUE  1

// int main() 
// {
//   int n;       /* candidato a primo           */
//   int divisor; /* candidato a divisor de n    */
//   int eprimo;  /* indica se n ainda tem chance de ser primo */

//   printf("\n\tTeste de primalidade\n");
//   printf("\nDigite um inteiro: ");
//   scanf("%d", &n);
//   printf ("Candidato a primo = %d\n", n); 

//   /* inicializacoes */
//   if (n <= 1 || (n != 2 && n % 2 == 0))
//     eprimo = FALSE; /* nenhum numero inteiro <= 1 ou par > 2 e' primo */
//   else 
//     eprimo = TRUE;  /* o numero e' primo ate que se prove o contrario */


//   /* os candidatos a divisores positivos de n sao 3,5,7,...,n/2 */
//   for (divisor = 3; divisor <= n/2 && eprimo == 1; divisor += 2)
//     if (n % divisor == 0) 
//       eprimo = FALSE; /* n nao e' primo! */
  

//   printf("O inteiro %d ", n);
//   if (eprimo == TRUE)
//     printf("e' primo\n");
//   else
//     printf("nao e' primo\n");
    
//   return 0;
// }

