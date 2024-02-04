#include "monty.h"


void close_stream(void)
{
	if (argumnts->stream == NULL)
	{
		return;
	}

	fclose(arguments->stream);
	arguments->stream = NULL;
}
