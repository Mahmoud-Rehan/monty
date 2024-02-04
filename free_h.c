#include "monty.h"


void free_h(void)
{
	if (arguments->h)
	{
		free_stack(arguments->h);
	}

	arguments->h = NULL;
}
