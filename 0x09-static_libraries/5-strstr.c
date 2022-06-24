#include "main.h"

/**
    * _strstr - compares first occurrence of substring needle in haystack
      * @haystack: source
        * @needle: what to be searched for
	  *
	    * Return: first occurance of string or NULL
	      */
char *_strstr(char *haystack, char *needle)
{
		int i;

			if (*needle == 0)
						return (haystack);

				while (*haystack)
						{
									i = 0;

											if (haystack[i] == needle[i])
														{
																		do {
																							if (needle[i + 1] == '\0')
																													return (haystack);
																											i++;
																														} while (haystack[i] == needle[i]);
																				}

													haystack++;
														}
					return ('\0');
}
