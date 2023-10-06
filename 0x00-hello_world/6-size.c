#include <stdio.h>

/**
 * main - C program that prints the size of various types
 *
 * Return: 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %1u byte(s)\n", sizeof(char));
	printf("Size of int: %1u byte(s)\n", sizeof(int));
	printf("Size of a long int: %1u bye(s)\n", sizeof(long int));
	printf("size of a long long int: %1u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %1u byte(s)\n", sizeof(float));
	return (0);
}
