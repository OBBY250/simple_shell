#include "shell.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main()
{
	const char *str = "/bin/ls"
	int i;
		for (i = 0; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	putchar('\n');
	return 0;
}
