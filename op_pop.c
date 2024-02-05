#include "monty.h"


/**
 * pop - Removes the top element from the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number.
 */

void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;

	if (arguments->h == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}

	delete_stack_top();
	arguments->stack_len -= 1;
}
