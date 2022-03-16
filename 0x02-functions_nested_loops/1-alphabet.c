#include <stdio.h>
#include "main.h"

/**
 * print-alphabet - to print the alphabet
 */

void print_alphabet(void)
{
        char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
      		ch++;
    	}

  	_putchar('\n');

}
