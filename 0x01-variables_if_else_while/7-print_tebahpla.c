#include<stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: 0 lowere case alphabet in reverse
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
