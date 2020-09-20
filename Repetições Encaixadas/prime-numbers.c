#include <stdio.h>

void main()
{
  int sum = 0, num, i, div;

  printf("\t\tProgram to take N numbers and sum those that are prime.");
  printf("\n\nEnter 0 to exit and display the sum.");

  while (num != 0)
  {
    div = 0;
    printf("\n\nEnter the number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
      if (num % i == 0)
      {
        div++;
      }
    }
      if (div == 2)
      {
        sum += num;
      }

  }

  printf("%d", sum);
}

//THERE'S NO ORIGINAL SOLUTION
