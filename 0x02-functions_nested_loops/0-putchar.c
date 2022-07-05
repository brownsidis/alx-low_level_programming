#include "stdio.h"

/**
 * main - entry point
 *a program that prints _putchar, followed by a new line.
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i <= 8)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
