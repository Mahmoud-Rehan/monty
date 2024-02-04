#include "monty.h"


void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	(void)stack;

	if (arguments->stack_len < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}

	first = arguments->h;
	second = first->next;
	first->next = second->next;

	if (first->next)
	{
		first->next->prev = first;
	}

	second->next = first;
	first->prev = second;
	second->prev = NULL;
	arguments->h = second;
}
