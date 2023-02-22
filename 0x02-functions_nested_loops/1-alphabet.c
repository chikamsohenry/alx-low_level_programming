#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Print all alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

void main(void)
{
	int ch;

	printf("Print all alphabet in lowercase letters followed by a new line :\n");
	/* print lowercase letters */

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
