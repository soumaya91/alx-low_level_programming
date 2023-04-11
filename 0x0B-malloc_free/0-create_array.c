#include "main.h"
#include <stdlib.h>

/**
  * *create_array - creates an array of chars
  * @size: size of the array
  * @c: char to init
  *
  * Return: pointer to the array, NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
