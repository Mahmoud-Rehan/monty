#include "monty.h"

/**
 * free_h - Frees allocated memory for h.
 */


void free_h(void)
{
	if (arguments->h)
	{
		free_stack(arguments->h);
	}

	arguments->h = NULL;
}
