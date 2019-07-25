#include "holberton.h"
/**
 * print_name - function that prints out name
 * @name: name
 * @f: function to use
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
