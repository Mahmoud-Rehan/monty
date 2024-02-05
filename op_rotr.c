#include "monty.h"



void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *last;

	(void)stack;
	(void)line_number;

	if (arguments->stack_len < 2)
	{
		return;
	}

	temp = arguments->h;
	
	while (temp)
	{
		if (temp->next == NULL)
		{
			last = temp;
			break;
		}

		temp = temp->next;
	}

	last->prev->next = NULL;
	last->next = arguments->h;
	last->prev = NULL;
	arguments->h = last;
}
