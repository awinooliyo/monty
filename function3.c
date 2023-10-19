#include "monty.h"

/**
* _isdigit - checks if it is a digit.
* Return: 0 or 1.
* @c: value.
*/

int _isdigit(char *c)
{
	char *temp = c;

	if (c == NULL)
		return (0);
	if (*temp == '-')
		temp++;
	for (; *temp != '\0'; temp++)
	{
		if ((*temp < '0' || *temp > '9'))
		{
			return (0);
		}
	}
	return (1);
}
