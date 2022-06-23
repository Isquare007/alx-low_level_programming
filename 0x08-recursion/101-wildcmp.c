#include "main.h"

/**
 * strlen_no_wilds - count strings ignoring wildcard
 * @str: string
 * Return: lentght
 */
int strlen_no_wilds(char *str)
{
	int len = 0;
	int i = 0;

	if (*(str + i))
	{
		if (*str != '*')
			len++;

		i++;
		len += strlen_no_wilds(str + i);
	}
	return (len);
}

/**
 * iterate_wild - iterates through a string located at a wildcard
 *                until it points to a non wildcard character
 * @wildstr: string
 * Return: 1 else 0
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
  * postfix_match - checks if the string str matches postfix of another
  *                 string potentially containing wildcard
  * @str: string
  * @postfix: postfix
  * Return: if identical a null byte located at the end of postfix
  *        otherwise a pointer to the first unmatched charater
  */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}

/**
  * wildcmp - compares two strings
  * @s1: string 1
  * @s2: string 2
  * Return: 1 else 0
  */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
