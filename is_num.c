#include "monty.h"


int is_num(char *string)
{
	int j = 0;

	while(string[j])
	{
		if (j == 0 && string[j] == '-' && string[j + 1])
		{
			j++;
			continue;
		}

		if (string[j] < '0' || string[j] > '9')
		{
			return (0);
		}
		j++;
	}

	return (1);
}
