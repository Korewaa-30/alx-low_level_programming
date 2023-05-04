#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 * @s: pointer to string
 *
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int y;

/* scan through string */
	y = 0;
	while (s[y] != '\0')
	{/* if next character after count is a char, capitalize it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[y] == ' ' || s[y] == '\t' || s[y] == '\n'
		    || s[y] == ',' || s[y] == ';' || s[y] == ','
		    || s[y] == '.' || s[y] == '!' || s[y] == '?'
		    || s[y] == '"' || s[y] == '(' || s[y] == ')'
		    || s[y] == '{' || s[y] == '}')
		{
			if (s[y + 1] >= 9 && s[y + 1] <= 122)
			{
				s[y + 1] = s[y + 1] - 32;
			}
		}
		y++;
	}
	return (s);
}
