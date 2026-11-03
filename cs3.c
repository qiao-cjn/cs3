#include <stdio.h>

int main()
{
	int A[10];
	int *a=A;
	printf("%p\n",&A);
	A[0]=1;
	printf("%p\n",A);
	
	
	return 0;
}