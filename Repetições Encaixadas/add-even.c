#include <stdio.h>

void main()
{
  printf("\t\tProgram to take two sequences of integer numbers, not null, ended by 0 and return the sum of the even numbers of each sequence.");

  int sequence1, sequence2, sum1 = 0, sum2 = 0;

  do
  {
    printf("\nEnter the numbers of the first sequence, enter 0 to end: ");
    scanf("%d", &sequence1);
    if (sequence1 % 2 == 0)
    {
      sum1 += sequence1;
    }
  } while (sequence1 != 0);

  do
  {
    printf("\nEnter the numbers of the second sequence, enter 0 to end: ");
    scanf("%d", &sequence2);
    if (sequence2 % 2 == 0)
    {
      sum2 += sequence2;
    }
  } while (sequence2 != 0);

  printf("\nThe sum of the even number of the first sequence is: %d", sum1);
  printf("\nThe sum of the even numbers of the second sequence is: %d", sum2);
}

//THERE'S NO ORIGINAL SOLUTION
