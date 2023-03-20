#include<stdio.h>

/**
 * main - program that prints the alphabet in lowercase ff by new line
 *
 * Return: lowercase and new line
 */
int main(void)

{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
