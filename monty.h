#ifndef MONTY_H_
#define MONTY_H_


#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;



/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



/**
 * struct args - hold variables
 * @stream: File that connects to the stream from file
 * @line: string which will be the line of text read from stream
 * @line_num: for tracking current line number
 * @tokens: used to store tokens from line
 * @instructions: a valid instruction from a line
 * @tokens_num: number of tokens created from line
 * @h: head of the stack (doubly linked lists of struct stack_s)
 * @stack_len: tracks the number of nodes in the stack
 * @stack: used to determine whether to use stack/queue data structure
 *
 * Description: hold variables that will be used
 * in different functions of the project as well as variables
 * that will require memory allocation and freeing
 */



typedef struct args
{
	FILE *stream;
	char *line;
	unsigned int line_num;
	char **tokens;
	int tokens_num;
	stack_t *h;
	int stack_len;
	int stack;
	instruction_t *instructions;
} args_t;



extern args_t *arguments;



/* FUNCTONS PROTOTYPES */
int dprintf(int fd, const char *format, ...);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
FILE *fdopen(int fd, const char *mode);
void initialize_args(void);
void check_args(int argc);
void free_args(void);
void _getstream(char *file_name);
void close_stream(void);
void getstream_error(char *file_name);
void malloc_error(void);
void token_line(void);
void free_tokens(void);
void get_instructions(void);
void run_instructions(void);
void instructions_error(void);
int is_num(char *string);
void free_h(void);
void free_stack(stack_t *h);
void free_all(void);
void delete_stack_top(void);



/* OPCODE FUNCTIONS */
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);



#endif
