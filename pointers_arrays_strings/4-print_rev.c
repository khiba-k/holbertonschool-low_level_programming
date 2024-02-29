#include "main.h"

/**
 *print_rev - function to print in reverse
 *@s: parameter name
 */
void print_rev(char *s)
{
int i = 0;
int j;
int k;
while (s[i] != '\0')
i++;
k = i;
for (j = k - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
