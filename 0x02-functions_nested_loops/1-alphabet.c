#include "main.h"

 /**
  * main - check the code for Alx school students.
  *Description: print the alphabet in lowercase followed by a newline.
  * Return: Always 0.
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);
	putchar('\n');
}
