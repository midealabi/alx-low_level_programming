#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: counts arguments
 * @argv: arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	print ("%d\n", argc - 1);

	return (0);
}
