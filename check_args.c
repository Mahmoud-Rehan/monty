#include "monty.h"
#include <stdio.h>


void check_args(int argc)
{
	if (argc == 2)
	{
		return;
	}

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
