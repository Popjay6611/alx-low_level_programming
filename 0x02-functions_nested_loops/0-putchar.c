#include "main.h"

/**
 * main-Write a program that prints _putchar
 * Return: always 0 (success)
 */ 

int main(void)
{
	char strg[] = "_putchar";

	int i = 0;

	while (i < 8)
	{
	_putchar(strg[i]);
		i++;
	}
	_putchar('\n');

return (0);
}

