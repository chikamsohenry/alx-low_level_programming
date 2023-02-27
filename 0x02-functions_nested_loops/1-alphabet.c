#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
}

/**
 * main - Entry point
 *
 * Description: print_alphabet in lower case
 * Return: Always  0 (Success)
 */
int main(void)
{
}
