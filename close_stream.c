#include "monty.h"

/**
 * close_stream - Closes the file stream.
 */


void close_stream(void)
{
	if (arguments->stream == NULL)
	{
		return;
	}

	fclose(arguments->stream);
	arguments->stream = NULL;
}
