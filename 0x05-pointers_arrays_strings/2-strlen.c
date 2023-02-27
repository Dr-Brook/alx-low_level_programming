#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @str: string for length
 * Return: @str
 */

size_t _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
