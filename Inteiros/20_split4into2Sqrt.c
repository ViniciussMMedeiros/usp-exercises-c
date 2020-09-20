#include <stdio.h>
#include <math.h>

void main(){
  printf("This program takes every 4 algarisms number and splits them into 2 dozens, checks if the square root of the number is equal to the sum of the two dozens. Prints all numbers when it's true.");

  int num, dozen1, dozen2, raiz, i;

  for(i = 1000; i < 10000; i++){
    dozen1 = i / 100;
    dozen2 = i % 100;
    raiz = sqrt(i);

    if(raiz == (dozen1 + dozen2)){
      printf("\n%d", i);
    }
  }
}

//THERE'S NO ORIGINAL SOLUTION
