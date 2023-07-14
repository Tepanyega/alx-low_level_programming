#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A progaram that prints all single digits
 * Return: (0) (Success)
 */
int main(void)
{
char low;
for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');
return (0);
}
