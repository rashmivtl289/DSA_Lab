#include<stdio.h>
#include<stdlib.h>
int key,i,n,a[10];
void lsearch(int key)
{
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			printf("Element is %d found at location %d\n",key,i);
			exit(0);
		}
	}
	printf("Element not found\n");
}
void bs(int key)
{
	int low,high,mid;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			printf("Element is %d found at %d\n",key,mid);
			exit(0);
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}	
	printf("Element not found\n");
}
void main()
{
	int op=1,ch;
	printf("Enter the No. of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the search elements\n");
	scanf("%d",&key);
	while(op)
	{
		printf("1.Linear Search\n2.Binary Search\n");
		printf("Enter your choice:");
		scanf("%d",&ch); 
		switch(ch)
		{
			case 1:lsearch(key);
			       break;
			case 2:bs(key);
			       break;
		}
		printf("Do you want to continue:");
		scanf("%d",&op);
	}
}
