#include<stdio.h>
int a[10],n=0,i,j,temp;
int bsort(int[],int);
int main()
{

printf("Enter number of element");
scanf("%d", &n);
printf("Enter array element");
for(i=0;i<n;i++)
scanf("%d", &a[i]);
bsort(a,n);
return 0;
}
int bsort(int a[], int n)
{
for(i=0;i<n-1;i++)
for(j=0;j<n-i-1;j++)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
printf("sorted array is:\t");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
