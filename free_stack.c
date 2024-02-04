#include "monty.h"


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
