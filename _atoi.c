#include "shell.h"

/**
 * interactive_sh - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive_sh(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * _delimeter - checks if character is a delimeter
 * @x: the char to check
 * @delimeter: string delimeter
 * Return: 1 if true, 0 if false
 */
int _delimeter(char x, char *delimeter)
{
	while (*delimeter)
		if (*delimeter++ == x)
		{
			return (1);
		}
	return (0);
}

/**
 * _character - checks for alphabetic character
 *@x: The character to input
 *Return: 1 if x is alphabetic, 0 otherwise
 */

int _character(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 *_atoi - converts a string to an integer
 *@s: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
