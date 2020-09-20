#include <stdio.h>

void main(){
  printf("\t\tProgram that takes three numbers and prints them in an ascending order.");

  int num1, num2, num3, aux;
  
  printf("\nEnter the three numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  //The order will be num1 < num2 < num3

  if(num1 > num2){ 
    aux = num1; 
    num1 = num2; 
    num2 = aux; 
  }
  if(num1 > num3){  
    aux = num1; 
    num1 = num3; 
    num3 = aux; 
  }
  if(num2 > num3){
    aux = num2;
    num2 = num3;
    num3 = aux;
  }
  
  printf("The numbers in ascending order are: %d %d %d", num1, num2, num3);
}

//ORIGINAL SOLUTION
// #include <stdio.h>

// int main() 
// {
//   int n1, n2, n3;       /* dados de entrada */
  
//   printf("Digite tres numeros: ");
//   scanf("%d %d %d", &n1, &n2, &n3);
  
//   /* Existem 6 possiveis ordens para imprimior os numeros lidos */
//   if (n1 <= n2 && n2 <= n3)
//     {
//       printf("A ordem crescente: %d %d %d\n", n1, n2, n3);
//     }
//   else if (n1 <= n3 && n3 <= n2)
//     {
//       printf("A ordem crescente: %d %d %d\n", n1, n3, n2);
//     }
//   else if (n2 <= n1 && n1 <= n3)
//     {
//       printf("A ordem crescente: %d %d %d\n", n2, n1, n3);
//     }
//   else if (n2 <= n3 && n3 <= n1) 
//     {
//       printf("A ordem crescente: %d %d %d\n", n2, n3, n1);
//     }
//   else if (n3 <= n1 && n1 <= n2) 
//     {
//       printf("A ordem crescente: %d %d %d\n", n3, n1, n2);
//     }
//   else /* n3 <= n2 && n2 < n1 */
//     {
//       printf("A ordem crescente: %d %d %d\n", n3, n2, n1);
//     }

//   return 0;
// }
