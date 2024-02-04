#include "monty.h"


void run_instructions(void)
{
	stack_t *new_stack = NULL;

	if (arguments->tokens_num == 0)
	{
		return;
	}

	arguments->instructions->f(&new_stack, arguments->line_num);
}
