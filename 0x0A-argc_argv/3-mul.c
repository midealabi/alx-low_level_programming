#include <stdio.h>
#include "main.h"
/**
 * main - a program that multiplies two numbers
 * @argc: the number of arguments
 * @argv: the name of the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	if (argc ==3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		
		return (0);
	}
	printf("Error\n");
	return (1);
}
