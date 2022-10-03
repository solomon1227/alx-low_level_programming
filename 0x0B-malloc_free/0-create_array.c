#include "main.h"
#include<stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes it with a specific char.
 * @size: size of te array
 * @c: initial char
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(c) * size);
	if (array == NULL || size == 0)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
}
