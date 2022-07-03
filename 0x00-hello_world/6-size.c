#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	sizeof evaluates the size of a variable
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(fl));
	printf("%zu\n", sizeof(double));
	printf("%zu\n", sizeof(char));
	return (0);
}
