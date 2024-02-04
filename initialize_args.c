#include "monty.h"


/**
 * initialize_args - initializes arguments
 * that is a pointer to args_t.
 */

void initialize_args(void)
{
	arguments = malloc(sizeof(args_t));

	if (arguments == NULL)
	{
		malloc_error();
	}

	arguments->instructions = malloc(sizeof(instruction_t));

	if (arguments->instructions == NULL)
	{
		malloc_error();
	}

	arguments->stream = NULL;
	arguments->line = NULL;
	arguments->tokens_num = 0;
	arguemnts->line_num = 0;
}
