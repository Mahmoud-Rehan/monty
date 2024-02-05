#include "monty.h"


/**
 * rotl - rotates the stack to the top
 * @stack: Pointer to the stack.
 * @line_number: Line number.
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	(void)stack;
	(void)line_number;

	if (arguments->stack_len < 2)
	{
		return;
	}

	first = arguments->h;
	second = first->next;
	arguments->h = second;

	while (second)
	{
		if (second->next == NULL)
		{
			second->next = first;
			first->next = NULL;
			first->prev = second;
			break;
		}

		second = second->next;
	}
}
