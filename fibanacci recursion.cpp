#include<stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top=-1;
void push(int element)
{
	if(top==MAX_SIZE-1)
	{
		printf("stack overflow:\n");
		return;
	}
	top++;
	stack[top]=element;
}
int pop()
{
	if(top==-1)
	{
		printf("stack underflow:\n");
		return -1;
	}
	int element=stack[top];
	top--;
	return element;
}
int peek()
{
	if(top==-1);
	{
		printf("stack is empty:\n");
		return -1;
	}
	return stack[top];
	
}
int main()
{
	push(30);
	push(20);
	push(10);
	printf("top element is: %d\n",peek());
	printf("popped element is: %d\n",pop());
	printf("popped element is: %d\n",pop());
	printf("top element is: %d",peek());
	return 0;
}
