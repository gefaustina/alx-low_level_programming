#include <stdio.h>
#include "main.h"

/**
*print_line - prints a staright line
*@n: parameter
*Return:returns nothing
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('-');
	}
	putchar('\n');
}
