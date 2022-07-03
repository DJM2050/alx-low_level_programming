#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
	int ch;
	for (ch = 97; ch <= 122; ch++)
	{	
		putchar(ch);
	}
	putchar(10);

	return (0);
}	
