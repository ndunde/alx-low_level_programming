#include <unistd.h>

/**
 * print_alphabet - character
 *
 * Description printing the alphabe with put_char
 *
 * Return: on sucess 1
 * on error ,-1 is returned and errno is set appropriate
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c => 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}
