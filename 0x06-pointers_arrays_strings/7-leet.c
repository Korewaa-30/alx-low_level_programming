#include "main.h"

/**
*leet - encodes a string into 1337
* Letters a and A should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1
* @s: points to string
* Return: pointer to s
*/

char *leet(char *s)
{
	int y, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

/* scan through string */
	y = 0;
	while (s[y] != '\0')
/* check whether leeLetter is found */
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[y])
			{
				s[y] = leetNums[leetCount];
			}
			leetCount++;
		}
		y++;
	}
	return (s);
}
