#include<stdio.h>
int a[10],n,i,j,temp;
void bsort()
{
for(i=0;i<n-1;i++)
for(j=0;j<n-i-1;j++)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
printf("sorted array is:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);

}
void main()
{

printf("Enter number of element");
scanf("%d", &n);
printf("Enter array element");
for(i=0;i<n;i++)
scanf("%d", &a[i]);
bsort();
}

