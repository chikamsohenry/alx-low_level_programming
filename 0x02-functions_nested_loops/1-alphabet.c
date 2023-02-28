#include "main.h"

/**
 * main - Entry point
 * Description: Print the alphabets in lowercase followed by as ner line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	char letter;
	for (letter = 'a', <= 'z', letter++)
		putchar(letter);
	putchar('\n');
}
