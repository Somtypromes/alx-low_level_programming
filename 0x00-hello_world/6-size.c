#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(S)\n", sizeof(long int));
	printf("size of a long long int: %i byte(S)\n", sizeof(long long int));
	printf("size of a float: %i byte(S)\n", sizeof(float));
	return (0);
}
