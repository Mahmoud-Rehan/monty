#include "monty.h"


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

	free(arguemnts->tokens);
	arguments->tokens = NULL;
}
