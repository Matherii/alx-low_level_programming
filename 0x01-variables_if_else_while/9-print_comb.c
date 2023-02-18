#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int f;
	for (f = 0; f < 100; f++) {
		putchar(f + '0');
		if (f < 99) {
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
