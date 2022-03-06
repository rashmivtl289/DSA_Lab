#include<stdio.h>
int a[10],n,i,j,temp,min;
void ssort()
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
printf("Sorted array is:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
void main()
{
printf("Enter the number of element:");
scanf("%d" ,&n);
printf("Enter array element\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
ssort();
}


