#include "monty.h"


void malloc_error(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_args();
	exit(EXIT_FAILURE);
}
