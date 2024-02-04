#include "monty.h"


void add(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	(void)stack;

	if (arguments->stack_len < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}

	first = arguments->h;
	second = first->next;
	second->n = first->n + second->n;
	delete_stack_top();
	arguments->stack_len -= 1;
}
