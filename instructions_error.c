#include "monty.h"

/**
 * instructions_error - Handles an unknown instruction error.
 */

void instructions_error(void)
{
	dprintf(2, "L%d: unknown instruction %s\n",
			arguments->line_num, arguments->tokens[0]);
	free_all();
	exit(EXIT_FAILURE);
}
