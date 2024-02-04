#include "monty.h"


void delete_stack_top(void)
{
	stack_t *temp;

	temp = arguments->h;
	arguments->h = temp->next;
	free(temp);	
}
