#include<stdio.h>
int a[10],n=0,i,j,temp,min;
int ssort(int[]);
int main()
{
printf("Enter the number of element:");
scanf("%d" ,&n);
printf("Enter array element\t");
for(i=0;i<n;i++)
scanf("%d" ,&a[i]);
ssort(a);
return 0;
}
int ssort(int a[])
{
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
if(a[min]<a[j])                                                                                                               
min=j; 
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
printf("Sorted array is:\t");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
