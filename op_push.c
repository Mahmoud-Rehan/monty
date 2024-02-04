#include "monty.h"


void push(stack_t **stack, unsigned int line_number)
{
	if (arguments->tokens_num <= 1 || !(is_num(arguments->tokens[1])))
	{
		free_args();
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));

	if (*stack == NULL)
	{
		malloc_error();
	}

	(*stack)->next = NULL;
	(*stack)->prev = NULL;
	(*stack)->n = (int)atoi(arguments->tokens[1]);

	if (arguments->h == NULL)
	{
		arguments->h = *stack;
	}
	else
	{
		if (arguments->stack)
		{
			(*stack)->next = arguments->h;
			arguments->h->prev = *stack;
			arguments->h = *stack;
		}
		else
		{
			stack_t *temp = arguments->h;

			while (temp->next)
			{
				temp = temp->next;
			}

			temp->next = *stack;
			(*stack)->prev = temp;
		}
	}

	
	arguemnts->stack_len += 1;
}
