#include <stdio.h>
 void main()
{
  int r,i,j,k;
  printf("Enter the no. of rows:\n");
  scanf("%d",&r);
  for (i = 0; i<r; i++)
    {
    for (j = 0; j <r-i-1; j++)
    {
      printf(" ");
    }
    for (k = 0; k < 2*i+1; k++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
