#include "shell.h"

/**
 **_strncpy - function  copies a string
 *@dest: the destination string to copy to
 *@src: the source string
 *@n: the number of characters to copy
 *Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	for (i = 0; src[i] != '\0' && i < n - 1; i++)
	{
		dest[i] = src[i];
	}
	if (i < n)
	{
		for (j = i; j < n; j++)
		{
			dest[j] = '\0';
		}
	}
	return (s);
}

/**
 **_strncat - function concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: the maximum amount of bytes to use
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0' && j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - function locates a character in a string
 *@s: the string to be parsed
 *@c: the character to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
