#include <stdio.h>
#include <stlib.h>
/**
 * main - a program that multiplies two numbers
 * @argc: the number of arguments
 * @argv: the name of the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result = 1, i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			result = result * strtol(argv[i], NULL, 10);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
