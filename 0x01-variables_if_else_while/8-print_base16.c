#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A program taht prints all the members of base 16
 * Return: (0) (Success)
 */
int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
