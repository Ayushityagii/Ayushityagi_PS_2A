#include <stdio.h>
  int main()
  {
  int s=3,i,j,k;
  for (i = 0; i<s; i++)
    {
    for (j = 0; j < i; j++)
     {
      printf(" ");
    }
    for (k = 0; k < (s-i)*2-1; k++)
    {
      printf("*");
    }
    printf("\n");
  }
  for (i = 2; i <= s; i++)
  {
    for (j =s; j > i; j--)
     {
      printf(" ");
    }
    for (int k = 0; k < i*2-1; k++)

    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
