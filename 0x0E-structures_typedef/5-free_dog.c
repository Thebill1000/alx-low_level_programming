#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Entry Point
 * @d: struct to free
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
