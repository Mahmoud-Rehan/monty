#include "monty.h"


/**
* free_stack - frees a stack list.
* @h: first node of a link.
*/


void free_stack(stack_t *h)
{
	if (h == NULL)
	{
		return;
	}

	if (h->next != NULL)
	{
		free_stack(h->next);
	}

	free(h);
}
