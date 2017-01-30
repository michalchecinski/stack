#include"stack.h"
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	CreateStack();
	
	int i;
	for(i=1; i<argc; i++)
		PutOnStack(atof(argv[i]));
	
	PrintStack();
	
	printf("Elements on stack: %i\n",CountElementsOnStack());
	
	
	printf("Get top element: %g\n", GetFromStack());
	
	PrintStack();
	
	printf("Elements on stack: %i\n",CountElementsOnStack());
	
	
	PutOnStack(4);
	PrintStack();
	printf("Elements on stack: %i\n",CountElementsOnStack());
	
	
	DestroyStack();	
	printf("\nAfter destroying stack:\n");
	
	PrintStack();
	
	printf("Elements on stack: %i\n",CountElementsOnStack());
	
	return 0;	
}