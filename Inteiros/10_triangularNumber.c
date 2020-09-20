#include <stdio.h>
#include <stdlib.h>

void main(){
  printf("\t\tProgram to test if the input by the user is a triangular number (n*(n+1)*(n+2)).");

  int num, i = 1, aux; 

  printf("\nEnter the number: ");
  scanf("%d", &num);

  for(i = 1; i < num; i++){
    if(i*(i+1)*(i+2) == num){
      aux = 1;
      printf("\n%d x %d x %d = %d", i, i+1, i+2, num);
    }
  }
  if(aux == 1){
    printf("\nIs a triangular number.");
  }else{
    printf("Isn't a triangular number.");
  }
}

// ORIGINAL SOLUTION
/* 
#include <stdio.h>

int main() {
  int i, n;
  
  printf("Digite o valor de n: ");
  scanf("%d",&n);
  
  for (i = 1; i*(i+1)*(i+2) < n; i++)
    ;
  
  if (i*(i+1)*(i+2) == n)
    printf("%d e' o produto %d*%d*%d\n", n, i, i+1, i+2);
  else
    printf("%d nao e' triangular\n", n);
  
  return 0;
}
*/