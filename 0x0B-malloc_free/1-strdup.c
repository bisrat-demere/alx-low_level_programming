#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function 
 * @str: char
 * Return: NULL **/
char *_strdup(char *str)
{
	int i = 0, l = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
