#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A progaram that prints all single digits
 * Return: (0) (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
