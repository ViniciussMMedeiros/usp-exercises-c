#include <stdio.h>

void main()
{
  printf("\t\tGiven a N positive number, returns all of the integers between 1 and N that are the hypotenuse of a triangle with integer sides.");

  int n, hypotenuse, side1, side2;

  printf("\nEnter the maximum value of the hypotenuse: ");
  scanf("%d", &n);

  for (hypotenuse = 1; hypotenuse <= n; hypotenuse++)
  {
    for (side1 = 1; side1 < hypotenuse; side1++)
    {
      side2 = side1;
      while (side1 * side1 + side2 * side2 < hypotenuse * hypotenuse)
      {
        side2++;
      }
      if ((hypotenuse * hypotenuse) == (side1 * side1) + (side2 * side2))
      {
        printf("\nH = %d S1 = %d S2 = %d ", hypotenuse, side1, side2);
      }
    }
  }
}

/* 
ORIGINAL SOLUTION
#include <stdio.h>

#define VERDADEIRO 1
#define FALSO 0

int main() {
  int n, cateto1, cateto2, hipotenusa;
  int achou;

  printf("Digite o comprimento maximo da hipotenusa: ");
  scanf("%d" , &n);

  for (hipotenusa = 1; hipotenusa <= n; hipotenusa++) {
    achou = FALSO;

    for (cateto1 = 1; cateto1 < hipotenusa && !achou; cateto1++) {
      cateto2 = cateto1; 
      while (cateto1*cateto1 + cateto2*cateto2 < hipotenusa*hipotenusa)
	cateto2++;
      if (cateto1*cateto1 + cateto2*cateto2 == hipotenusa*hipotenusa){
	printf("hipotenusa = %d, catetos %d e %d\n", hipotenusa, cateto1, cateto2);
	achou = VERDADEIRO;
      }
    }
  }

  return 0;
}


*/