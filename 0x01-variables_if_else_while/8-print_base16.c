#include <stdio.h>

/**
 * main - prints all numbers in bae 16 in lowercase
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
