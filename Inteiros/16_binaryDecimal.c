#include <stdio.h>
#include <stdlib.h>

void main(){
  printf("\t\tProgram to convert binary to decimal.");
  
  int num, result = 0, pow2 = 1; 

  printf("\nEnter the number to be converted: ");
  scanf("%d", &num);
   
  printf("%d in decimal is: ", num);
  while (num != 0){
    result = result + num % 10 * pow2;
    printf("\nPartial result is: %d", result);
    printf("\nPartial module is: %d", num%10);
    num = num / 10;
    printf("\nPartial num is: %d", num);
    pow2 = pow2 * 2;
    printf("\nPartial pow is: %d", pow2);
  }
  
  printf("\n%d", result);
  
}
/*
ALTERNATIVE
void main(){
int num, i = 0; result = 0;

printf("\nEnter the number to be converted: ");
scanf("%d", &num);

//num % 10 to take the last digit
//num / 10 to take off the last digit

while(bin){
  result = result + pow(2,i) * (num % 10);
  num = num / 10;
  i++
  }
}
printf("%d", result);
*/


/* 
ORIGINAL SOLUTION

#include <stdio.h>

int main() {
  int num,        // numero dado (na base 2)             
      pot2,       // guardara uma potencia de 2          
      final;      // numero dado convertido para base 10 
  
  printf("Digite o numero a ser transformado da base 2 para a base 10: ");
  scanf("%d", &num);
  
  //inicializacoes 
  final = 0;
  pot2  = 1;
  
  printf("%d na base 10 e': ", num);
  
  while (num != 0){
    final = final + num % 10 * pot2;  //processa um digito binario 
    num = num / 10;
    pot2 = pot2 * 2;
  }
  printf("%d\n", final);
  
  return 0;
}
*/