#include <stdio.h>

/**
 * 
 * 
*/
int main(int argc, char *argv[])
{
  int i;
  int j;
  for (i = 0; i < argc; i++)
    {
      if (i > 0)
	{
	  j = argv[i] - '0';
	printf("%d", j * j);
	}
    }
  return (Error);
}
