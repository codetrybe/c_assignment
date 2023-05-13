#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 100;
	int *ptrA;

	ptrA = &a;

	/* Print the value of variable 'a' */
	printf("The value of a is %d\n", a);
	printf("The value of a is %d\n", *ptrA);

	/* Print the memory address of variable 'a' */
	printf("The address of a is %p\n", &a);
	printf("The address of a is %p\n", ptrA);

	/* Assign a new value to the variable pointed to by 'ptrA' */
	*ptrA = 200;

	/* Print the new value of 'a' after dereferencing */
	printf("The value of a after dereferencing is %d\n", a);

	return (0);
}
