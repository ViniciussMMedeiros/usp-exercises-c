#include <stdio.h>

void main(){
printf("\t\tProgram that checks if a number contais another number.");

int num, numToFind, numAux, lastDigit;

do{
printf("\n**Number have to be bigger than the digit to be searched.");
printf("\n\nEnter the number: ");
scanf("%d", &num);

printf("\nEnter the digit to be searched: ");
scanf("%d", &numToFind);
  }while(numToFind > num);

numAux = num;

while(num != 0){
  lastDigit = numAux % 10;
  numAux /= 10;
  
  if(lastDigit == numToFind){
    printf("\n%d contains %d.", num, numToFind);
    break;
    }
  }

}


//THERE ISN'T AN ORIGINAL SOLUTION
