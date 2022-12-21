#include<stdio.h>

void main()
{
    int i,j,k,r;

    printf("Enter the no. of rows\n");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
        k = i;
        for(j=1;j<=i;j++,k++)
        {
            printf("%c",(k+64));
        }
         printf("\n");
    }
}
