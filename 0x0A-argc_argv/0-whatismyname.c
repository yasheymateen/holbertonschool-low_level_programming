#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name and doesn't compile if renamed
 * @argc: # of arguments
 * @argv: array containing the argument values
 * Return: void
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
