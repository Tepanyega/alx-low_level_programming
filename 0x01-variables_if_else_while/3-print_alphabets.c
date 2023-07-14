#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A program taht prints all the members of base 16
 * Return: (0) (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
