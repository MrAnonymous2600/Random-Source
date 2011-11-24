#include <stdio.h>
void function1(void);
void function2(void);

int main(void)
{
	printf("Hello World!\n");
	function1();
	function2();
	return 0;
}

void function1(void)
{
	printf("Function One\n");
}

void function2(void)
{
	printf("Function Two\n");
}