#include "monty.h"


void get_instructions(void)
{
	int n;
	instruction_t instructions[] = {
		{"push", &push}, {"pop", &pop},
		{"pint	", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall}, {"sub", &sub},
		{"div", &_div}, {"mul", &mul},/*
		{"rotl", &rotl}, {"rotr", &rotr},
		{"stack", &stack}, {"queue", &queue},
		{"pstr", &pstr}, {"pchar", &pchar},
		{"mod", &mod},*/
		{NULL, NULL}
	};

	if (arguments->tokens_num == 0)
	{
		return;
	}

	if (arguments->tokens[0][0] == '#')
	{
		arguments->instructions->opcode = "nop";
		arguments->instructions->f = nop;
		return;	
	}

	for (n = 0; instructions[n].opcode != NULL; n++)
	{
		if (strcmp(instructions[n].opcode, arguments->tokens[0]) == 0)
		{
			arguments->instructions->opcode = instructions[n].opcode;
			arguments->instructions->f = instructions[n].f;
			return;
		}
	}

	instructions_error();
}
