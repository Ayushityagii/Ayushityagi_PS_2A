#include<stdio.h>
void main()
{
    int a[]={1,2,1,2,4,6,6};
    int i,n,ans=0;
    for(i=0;i<=6;i++)
    {
        ans^=a[i];
}
printf("%d",ans);
}
