#include "monty.h"

/**
* delete_stack_top - delete stack top.
*/


void delete_stack_top(void)
{
	stack_t *temp;

	temp = arguments->h;
	arguments->h = temp->next;
	free(temp);
}
