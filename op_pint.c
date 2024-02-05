#include "monty.h"


/**
 * pint - Prints the value at the top of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number.
 */


void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;

	if (arguments->h == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", arguments->h->n);
}
