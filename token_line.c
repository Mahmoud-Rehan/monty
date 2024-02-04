#include "monty.h"


/**
 * token_line - Tokenizes the line read from file.
 */

void token_line(void)
{
	char *delim = " \n", *tok = NULL, *line_copy = NULL;
	int n = 0;

	line_copy = malloc(sizeof(char) * (strlen(arguments->line) + 1));
	strcpy(line_copy, arguments->line);
	arguments->tokens_num = 0;
	tok = strtok(line_copy, delim);

	while (tok)
	{
		arguments->tokens_num += 1;
		tok = strtok(NULL, delim);
	}

	arguments->tokens = malloc(sizeof(char *) *
			(arguments->tokens_num + 1));

	strcpy(line_copy, arguments->line);
	tok = strtok(line_copy, delim);
	
	while (tok)
	{
		arguments->tokens[n] = malloc(sizeof(char) *
				(strlen(tok) + 1));

		if (arguments->tokens[n] == NULL)
		{
			malloc_error();
		}

		strcpy(arguments->tokens[n], tok);
		tok = strtok(NULL, delim);
		n++;
	}

	arguments->tokens[n] = NULL;
	free(line_copy);
}
