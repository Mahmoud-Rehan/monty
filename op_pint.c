#include "monty.h"


void pint(stack_t **stack, unsigned int line_number)
{
	(void)stack;

	if (arguments->h == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", arguments->h->n);
}
