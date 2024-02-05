#include "monty.h"


/**
 * free_args - Frees all allocated memory for arumnets ptr.
 */


void free_args(void)
{
	if (arguments == NULL)
	{
		return;
	}

	if (arguments->instructions)
	{
		free(arguments->instructions);
		arguments->instructions = NULL;
	}

	free_h();

	if (arguments->line)
	{
		free(arguments->line);
		arguments->line = NULL;
	}

	free(arguments);
}
