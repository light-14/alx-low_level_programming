#include "main.h"

/**
 * main - print the word '_putchar'
 *
 * Program that prints _putchar, followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char s[9] = "_putchar";
	int i = 0;

	while (i < 8)
		{
		_putchar (s[i]);
		i++;
		}
		_putchar ('\n');
	return (0);
}
