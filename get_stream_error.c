#include "monty.h"

/**
 * getstream_error - Handles the error when reading a file fails.
 * @file_name: The name of the file that failed to open.
 */

void getstream_error(char *file_name)
{
	dprintf(2, "Error: Can't open file %s", file_name);
	free_args();
	exit(EXIT_FAILURE);
}
