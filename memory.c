#include "shell.h"

/**
 * mefree - frees memory space pointed to by a pointer
 * @ptr: address of pointer to free
 *
 * Return: 1 if succesful, otherwise 0.
 */
int mefree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
