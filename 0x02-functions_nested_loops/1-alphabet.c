#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * print_alphabet - make the alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
