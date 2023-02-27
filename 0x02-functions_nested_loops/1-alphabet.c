#include "main.h"
#include<stdio.h>
#include<string.h>
#include<unistd.h>
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
 * Description: print all alphabet lettters in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
}
