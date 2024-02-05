#include "monty.h"


/**
 * pall - Prints all the elements in the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number.
 */


void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (arguments->h == NULL)
	{
		return;
	}

	(void)stack;
	(void)line_number;

	temp = arguments->h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
