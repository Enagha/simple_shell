#include "shell.h"

/**
 **_memset - function fills memory with a constant byte
 *@s: the pointer to the memory area
 *@b: the byte to fill pointed memory with
 *@n: the amount of bytes to fill
 *Return: (s) a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
		s[i] = b;
	i++;
	return (s);
}

/**
 * ffree - function frees a string of strings
 * @pp: string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp != NULL)
		free(*pp++);
	free(a);
}

/**
 * _realloc - Function reallocates a block of memory
 * @ptr: pointer to previous malloc allocated block
 * @old_size: byte size of previous malloc block
 * @new_size: byte size of new block
 *
 * Return: pointer to old block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nu;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	nu = malloc(new_size);
	if (!nu)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		nu[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (nu);
}
