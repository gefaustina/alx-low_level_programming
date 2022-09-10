#include <stdio.h>

/**
 * main - Prints the alphabets at reverse
 *
 * Return: Alwaya (Success)
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
