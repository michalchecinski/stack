#include "stack.h"
#include<stdio.h>
#include<stdlib.h>

struct elem *stack;
struct elem *new;

void PutOnStack(double n)
{
	new = malloc(sizeof *new);
	
	new->value = n;
	new->next = stack;
	
	stack = new;
}

double GetFromStack()
{
	double value = stack->value;
	
	stack=stack->next;
	
	return value;
}

double TopOfStack()
{
	return stack->value;
}

int CountElementsOnStack()
{
	int counter = 0;
	new = stack;
	while(new != NULL)
	{
		counter++;
		new = new->next;
	}
	return counter;
}

void CreateStack()
{
	stack=NULL;
}

void DestroyStack()
{
	while(stack != NULL)
	{
		new = stack->next;
		free(stack);
		stack = new;
	}
	
	stack = NULL;
}

void PrintStack()
{
	if(stack == NULL)
		printf("Stack is empty\n");
	else
	{
		new = stack;
		while(new != NULL)
		{
			printf("%g\n",new->value);
			new = new->next;
		}
	}
}