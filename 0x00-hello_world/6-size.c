#include <stdio.h>

/**
 * main - C program that prints the size of various types
 *
 * Return: o on success
 */

int main(void)
{
	printf("Size of a char: %1u byte(s)", sizeof(char));
	printf("Size of int: %1u byte(s)", sizeof(int));
	printf("Size of a long int: %1u bye(s)", sizeof(long int));
	printf("size of a long long int: %1u byte(s)", sizeof(long long int));
	printf("Size of a float: %1u byte(s)", sizeof(float));
	return (0);
}
