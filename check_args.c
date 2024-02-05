#include "monty.h"
#include <stdio.h>

/**
 * check_args - Checks the number of command-line arguments.
 * @argc: The number of command-line arguments.
 */


void check_args(int argc)
{
	if (argc == 2)
	{
		return;
	}

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
