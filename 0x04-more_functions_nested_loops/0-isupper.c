#include "main.h"
<<<<<<< HEAD
#include "config.h"

/**
 * _isupper - checks is a character is uppercase
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
=======
/**
 * _isupper - checks if letters are uppercase.
 * @c: input.
 *
 * Return: 1 if c is uppercase
 * 0 otherwise.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
>>>>>>> a9ed80c859b3680b73bfbc0a083f46cb584d02d9
}
