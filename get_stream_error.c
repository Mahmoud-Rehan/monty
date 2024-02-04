#include "monty.h"


void getstream_error(char *file_name)
{
	dprintf(stderr, "Error: Can't open file %s", file_name);
	free_arguments();
	exit(EXIT_FAILURE);
}
