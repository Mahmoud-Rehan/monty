#include "monty.h"

args_t *arguments = NULL;

int main(int argc, char **argv)
{
	size_t size = 0;

	check_args(argc);
	initialize_args();
	_getstream(argv[1]);

	while (getline(&arguments->line, &size, arguments->stream) != -1)
	{
		arguments->line_num += 1;
		token_line();
		get_instructions();
		run_instructions();
		free_tokens();
	}

	close_stream();
	free_args();
	return (0);
}
