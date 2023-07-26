#include "shell.h"

/**
 * _strcpy - function copies a string
 * @dest: the destination to copy to
 * @src: the source
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	if (dest == src || src == 0)
		return (dest);
	for (k = 0; src[k]; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = 0;
	return (dest);
}

/**
 * _strdup - function duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string
 */
char *_strdup(const char *str)
{
	int leng = 0;
	char *resu;

	if (str == NULL)
		return (NULL);
	while (*str++)
		leng++;
	resu = malloc(sizeof(char) * (leng + 1));
	if (!resu)
		return (NULL);
	for (leng++; leng--;)
		resu[leng] = *--str;
	return (resu);
}

/**
 *_puts - function prints an input string
 *@str: the string to be printed
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int k;

	if (!str)
		return;
	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
}

/**
 * _putchar - function writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
