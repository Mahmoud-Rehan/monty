#include "monty.h"


/**
 * sub - Subtracts the top element of the stack from the second top element.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the sub function is called.
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	(void)stack;

	if (arguments->stack_len < 2)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}

	first = arguments->h;
	second = first->next;
	second->n = second->n - first->n;
	delete_stack_top();
	arguments->stack_len -= 1;
}
