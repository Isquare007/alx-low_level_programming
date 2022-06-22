#include "main.h"

/**
  * find_strlen - returns lentgh of string
  * @s: string
  * Return: length
  */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
  * check_pali - check if string is palindrome
  * @s: string
  * @len: lenght
  * @i: index of string
  * Return: 1 else 0
  */
int check_pali(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_pali(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string
 * Return: (1) elsse 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}
}
