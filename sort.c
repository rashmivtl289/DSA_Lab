#include<stdio.h>
int a[10],n,i,j;

void ssort()
{
 int temp,min;
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

void bsort()
{
 int temp;
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

int op=1,ch;
printf("Enter the No. of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
while(op)
{
 printf("1.Bubble sort\n2.selection sort\n");
 printf("Enter your choice:");
 scanf("%d",&ch); 
 switch(ch)
		{
			case 1:bsort();
			       break;
			case 2:ssort();
			       break;
			default:printf("Invalid choice:");
			        break;       
		}
		printf("\nDo you want to continue:");
		scanf("%d",&op);
	}
}		
		
