#include "shell.h"

/**
 * bfree - function frees memory space pointed to by a pointer
 * @ptr: pointer address to free
 *
 * Return: 1 if succesful, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
