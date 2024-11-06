#include<stdio.h>
int main()
{
    int n,i,a[10],p,x;
    printf("enter no of elements:\n");
    scanf("%d",&n);
    printf("enter %d elements:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter location of new element:\n");
    scanf("%d",&p);
    printf("enter the new element:\n");
    scanf("%d",&x);
    for(i=n-1;i>=p-1;i--)
        a[i+1]=a[i];
    a[p-1]=x;
    printf("new array :");
    for ( i=0;i<=n;i++)
    printf("%d ",a[i]);
return 0;
}