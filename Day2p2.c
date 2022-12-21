#include <stdio.h>
 int main()
{
    int i, j, k, r;

    printf("Enter rows: ");
    scanf("%d", &r);

    for(i=1; i<=r; i++)
    {
        k = i;

        for(j=1; j<=i; j++, k++)
        {
            printf("%d",k);
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}
