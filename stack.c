#include<stdio.h>
#include<stdlib.h>
#define size 3
int top=-1,s[size],choice,ele,i;
void push()
{
printf("Enter the element to push\t");
scanf("%d",&ele);
if(top==size-1)
{
printf("Stack is full");
}
s[++top]=ele;
}
int pop()
{
if(top==-1)
{
printf("Stack is empty");
exit(0);
}
top=top-1;
return ele;
}
void display()
{
if(top==-1)

printf("stack is empty");
else
{
printf("\nstack elements are");
for(i=0;i<=top;i++)
printf("%d",s[i]);
}
}
void main()
{
int ch,opt=1;
while(opt)
{
printf("\n1.push\t2.pop\t3.display\t4.exit\nEnter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
      break;
case 2:pop();
      break;
case 3:display();
      break;
case 4:exit(0);
default:printf("Invalid choice");
      break;
}
printf("\n Do you want contiune(0/1)");
scanf("%d",&opt);
}
}

