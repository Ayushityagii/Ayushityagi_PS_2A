#include <stdio.h>
 int main()
 {
     int r=3,i,j,k;
  for (i = 1;i<=r; i++)
    {
    for (j =r; j > i; j--)
    {
      printf(" ");
    }
    for (k = 0; k < i*2-1; k++)
     {
      printf("*");
    }
    printf("\n");
  }
  for (i = 1; i <= r-1; i++)
  {
    for (int j = 0; j < i; j++)
     {
      printf(" ");
    }
    for (k = (r-i)*2-1; k > 0; k--)
     {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
