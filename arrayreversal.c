#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],n;
    scanf("%d",&n);
    if(n<1||n>1000)
     return 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<1||a[i]>1000)
        return 0;
    }
    for(int i=n-1;i>=0;i--)
    printf("%d ",a[i]);
    return 0;
}