#include "monty.h"


args_t *arguments = NULL;


/**
 * main - The main function of the program.
 * @argc: Number of command-line arguments.
 * @argv: Pointer to an array of strings.
 * Return: returns 0.
 */
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
