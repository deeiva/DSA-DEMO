#include<stdio.h>
int main()
{
int i,n1,a[10],n2,b[10],n3,c[20];
printf("enter no of elements in first array:");
scanf("%d",&n1);
printf("enter first array elements:");
for(i=0;i<n1;i++);
{
    scanf("%d",&a[i]);
}
printf("enter no of elements in second array:");
scanf("%d",&n2);'
printf("enter second array elements:");
for(i=0;i<n;i++);
{
scanf("%d",&b[i]);
}
n3=n1+n2;
for(i=0;i<n1;i++)
{
c[i]=a[i];
}
for(i=0;i<n2;i++)
{
c[i+n]=b[i];
}
printf("merged array is:");
for(i=0;i<n3;i++)
{
printf("%d",c[i]);
}
return 0;
}