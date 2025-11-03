#include "main.h"

/**/
char *_strstr(char *haystack, char *needle)
{
	int i, c;

	for (; *haystack != 0; ++haystack)
	{
		c = 0;
		for(i = 0; needle[i] != 0; ++i)
		{
			if(haystack[i] == 0)
				break;
			if(haystack[i] == needle[i])
				c = 1;
			else
				c = 0;
		}
		if(c == 1)
			return (haystack);
	}
	return NULL;
}
