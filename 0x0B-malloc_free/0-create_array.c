#include "main.h"

#include <stdlib.h>

/**
 *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/



char *create_array(unsigned int size, char c)

{

	char *str;

	unsigned int i;



	if (size == 0)

		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)

		return (NULL);

	for (i = 0; i < size; i++)

	{

		str[i] = c;

	}

	return (str);
}
