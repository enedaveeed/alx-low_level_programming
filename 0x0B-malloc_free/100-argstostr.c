#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - convert the params passed to the program to string
  * @ac: the argument count
  * @av: the argument vector
  *
  * Return: ...
  */
char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}

		j = 0;
		i++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);
