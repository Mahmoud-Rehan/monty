#include "monty.h"


/**
 * free_tokens - Frees the allocated memory for tokens.
 */


void free_tokens(void)
{
	int n = 0;

	if (arguments->tokens == NULL)
	{
		return;
	}

	while (arguments->tokens[n])
	{
		free(arguments->tokens[n]);
		n++;
	}

	free(arguments->tokens);
	arguments->tokens = NULL;
}
