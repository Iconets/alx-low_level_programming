#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z'; i++)
		putchar(i);
	for (i = 'A' ; i <= 'z'; i++)
		putchar(i);
	putchar("\n");
	return (0);
}
