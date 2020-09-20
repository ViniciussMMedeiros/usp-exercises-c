/* Any number can be the perfect number in C
 if the sum of its positive divisors excluding the number itself is equal to that number.*/

 #include <stdio.h>
 #include <stdlib.h>

 void main(){
   printf("\t\tProgram to check if the input by the user is a perfect number.");
   printf("\n- A number is a perfect number if the sum of its positive divisors excluding the number itself is equal to that number.");

   int num, i, sum = 0;

   printf("\nEnter the number: ");
   scanf("%d", &num);

   for(i = 1; i < num; i++){
     if(num % i == 0){
       sum += i;
     }
   }

   if(num == sum){
     printf("The number is perfect.");
   }else{
     printf("The number isn't perfect.");
   }
  }

//ORIGINAL SOLUTION
/* Programa que determina se um numero e' perfeito */
// #include <stdio.h>

// int main() {
//   int n,       /* numero a ser verificado             */
//       soma,    /* soma dos valores dos divisores de n */
//       divisor; /* candidato a divisor de n            */

//   printf("Digite um numero inteiro positivo: ");
//   scanf("%d", &n);
  
//   /* inicializacoes */
//   soma = 0;
  
//   for (divisor = 1; divisor < n; divisor++){
//     if (n % divisor == 0)
//       soma = soma + divisor;
//   }
  
//   if (n == soma)
//     printf("O numero %d e' perfeito\n", n);
//   else 
//     printf("O numero %d nao e' perfeito\n", n);
  
//   return 0;
// }