#include "monty.h"

/**
* usage_error - prints a usage error message.
* Return: Failure
*/

void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");

	exit(EXIT_FAILURE);

}

/**
*open_error - prints an open file error message.
*@file: file.
* Return: FAILURE.
*/

void open_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);

	exit(EXIT_FAILURE);
}


/**
* push_error - handles push error(s).
* @fd: file descriptor.
* @line: buffer.
* @stack: que or stack.
* @line_number: line number of the command.
*/

void push_error(FILE *fd, char *line, stack_t *stack, int line_n)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_n);
	fclose(fd);
	free(line);
	_free(stack);
	exit(EXIT_FAILURE);
}

/**
* instr_error - Error handler for unknown instructions.
* @fd: file descriptor.
* @line: buffer.
* @stack: stack or queue.
* @line_number: line number of the command.
* @val: instruction.
*/

void instr_error(FILE *fd, char *line, stack_t *stack, char *line_n, int val)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", val, line_n);
	fclose(fd);
	free(line);
	_free(stack);
	exit(EXIT_FAILURE);
}
