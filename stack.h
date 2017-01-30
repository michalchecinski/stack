struct elem
{
	double value;
	struct elem *next;
};

void PutOnStack(double n);

double GetFromStack();

double TopOfStack();

int CountElementsOnStack();

void CreateStack();

void DestroyStack();

void PrintStack();

