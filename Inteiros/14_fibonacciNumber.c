#include <stdio.h>
#include <stdlib.h>

void main(){
  printf("\t\tProgram to return the fibonacci sequence number for the input.");
  int num, a = 0, b = 1, c, i; 
   printf("\nEnter the number: ");
   scanf("%d", &num);
    
    if (num == 0){
        printf("%d", a); 
    }
    
    for (i = 2; i <= num; i++) { 
        c = a + b; 
        a = b; 
        b = c; 
    } 
    printf("%d", b); 
}

//ORIGINAL SOLUTION

// int main() {
//   int n, 
//     fant, fatual, fprox,  /* numeros de Fibonacci                            */
//     contador;             /* indica qual número de Fibonacci esta' em fatual */
  
//   printf("Digite um numero n: ");
//   scanf("%d", &n);
  
//   /* inicializacoes */
//   fant   = 0;
//   fatual = 1;
//   contador = 1;
  
//   while (contador < n) {
//     fprox  = fatual + fant;  /* proximo numero de Fibonacci */
//     fant   = fatual;
//     fatual = fprox;
//     contador = contador + 1;
//   }
//   printf("Numero %d de Finobacci = %d\n", n, fatual);
  
//   return 0;
// }