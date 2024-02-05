#include "monty.h"


/**
 * malloc_error - Handles the error when malloc fails to allocate memory.
 */

void malloc_error(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_args();
	exit(EXIT_FAILURE);
}
