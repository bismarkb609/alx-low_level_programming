#include <stdio.h>
/**
 * main - prints numbers
 *
 * Description: numbers from zero to ten
 *
 * Return: Allways 0 (Success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		printf("%d", x);
	}

	printf("\n");

	return (0);
}

