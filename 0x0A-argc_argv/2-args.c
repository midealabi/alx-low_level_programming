#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: counts arguments
 * @argv: arguments
 * Return: Always 0 (success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int count = 0
		if (argc > 0)
		{
			while (count < argc)
			{
				printf("%s\n", argv[count]);
				count++;
			}
		}
	return (0);
}
