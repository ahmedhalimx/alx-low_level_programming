#include "main.h"

/**
 * print_alphabet - print all english alphabets in lowercase.
 */

void print_alphabet(void)
{
	char letter;
	for (i = 0; i <= 9; i++){
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		
		_putchar('\n');
	}
}
