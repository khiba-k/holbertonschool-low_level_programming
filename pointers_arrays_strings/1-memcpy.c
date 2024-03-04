#include "main.h"

/**
 * 
 *  
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned j, k;
  for (j = 0; j < n; j++)
    {
      for (k = 0; k < n; k++)
	{
	  dest[k] = src[j];
	}
    }
  return (dest);
}
