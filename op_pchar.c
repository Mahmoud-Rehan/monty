#include "monty.h"


void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)stack;

	if (arguments->h == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}

	temp = arguments->h;

	if (temp->n < 0 || temp->n > 127)
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}

	printf("%c\n", temp->n);
}
