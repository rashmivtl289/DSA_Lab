#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int Q[MAX],front=-1,rear=-1,ele,i;
void enqueue(int ele)
{
if(rear==MAX-1)
{
printf("Queue is full");
exit(0);
}
Q[++rear]=ele;
if(front==-1)
front=0;
}
void dequeue()
{
if(front==-1)
{
printf("Queue is empty");
exit(0);
}
ele=Q[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
front=front+1;
}
void display()
{
if(front==-1)
{
printf("Queue is empty");
exit(0);
}
for(i=front;i<=rear;i++)
printf("%d",Q[i]);
}
void main()
{
int ch,opt=1,ele;
while(opt)
{
printf("\n1.Insert\n2.Delete\n3.Display\n4.exit\nEnter your choice\t");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter element to be insert");
       scanf("%d",&ele);
       enqueue(ele);
       break;
case 2:dequeue();
       break;
case 3:display();
       break;
case 4:exit(0);
default:printf("Invalid choice");
       break;
}
printf("Do you want contine(0/1)");
scanf("%d",&opt);
}
}

