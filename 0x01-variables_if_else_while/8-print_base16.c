#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int p;

	char z;

	z = 'a';
	p = 0;
	while
		(p < 10) {
			putchar(p + '0');
			p++;
		}
	while
		(z <= 'f') {
			putchar(z);
			z++;
		}
	putchar('\n');
	return (0);
}
