#include "monty.h"


void free_all(void)
{
	close_stream();
	free_tokens();
	free_args();
}
