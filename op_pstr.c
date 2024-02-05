#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number.
 */


void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)stack;
	(void)line_number;

	temp = arguments->h;

	while (temp != NULL)
	{
		if (temp->n <= 0 || temp->n > 127)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}

	printf("\n");
}
