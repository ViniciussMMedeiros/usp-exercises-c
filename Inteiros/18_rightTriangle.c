#include <stdio.h>

void main(){
  printf("\t\tProgram that takes the 3 sides of a triangle and says if it is a right triangle or not.");

  int side1, side2, side3, aux;
  printf("\nEnter the value of the sides: ");
  scanf("%d %d %d", &side1, &side2, &side3);

  //side1 will be the hypotenuse 

  if(side1 < side3){
    aux = side1;
    side1 = side3;
    side3 = aux;
  }
  if(side1 < side2){
    aux = side1;
    side1 = side2;
    side2 = aux;
  }

  if(side1 * side1 == (side2 * side2 + side3 * side3)){
    printf("Is a right triangle.");
  }else{
    printf("Isn't a right triangle.");
  }
}