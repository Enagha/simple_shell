#include "shell.h"

/**
 * interactive - function returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if in  interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - function checks if character is a delimeter
 * @c: the charater to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 *_isalpha - function checks for alphabets
 *@c: letter to be checked
 *Return: 1 if c is an alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/**
 *_atoi - function converts a string to an integer
 *@s: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int ans = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			ans = ans * 10;
			ans = ans + (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -ans;
	else
		output = ans;

	return (output);
}
