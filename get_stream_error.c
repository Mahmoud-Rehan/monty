#include "monty.h"


void getstream_error(char *file_name)
{
	dprintf(2, "Error: Can't open file %s", file_name);
	free_args();
	exit(EXIT_FAILURE);
}
