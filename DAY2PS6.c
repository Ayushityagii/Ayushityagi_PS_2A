
#include<stdio.h>
  int main()
{
 int n, i, j, m=1, gap;
 printf("enter no. of rows:\n");
 scanf("%d",&n);

 gap = n - 1;

 for ( j = 1 ; j <= n ; j++ )
 {
  m= j;

  for ( i = 1 ; i <= gap ; i++ )
   printf(" ");

  gap --;

  for ( i = 1 ; i <= j ; i++ )
  {
   printf("%d",m);
   m++;
  }
  m--;
  m--;
  for ( i = 1 ; i < j ; i++)
  {
   printf("%d",m);
   m--;
  }
  printf("\n");

 }

 return 0;
}


