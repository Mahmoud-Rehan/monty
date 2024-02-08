#include "monty.h"


/**
 * mul - Multiplies the top two elements of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number.
 */



void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	(void)stack;

	if (arguments->stack_len < 2)
	{
		dprintf(2, "L%d: can't mul, stack too short\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}

	first = arguments->h;
	second = first->next;
	second->n = second->n * first->n;
	delete_stack_top();
	arguments->stack_len -= 1;
}
