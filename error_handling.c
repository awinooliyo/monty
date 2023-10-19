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
* push_error - handles push error(s).
* @fd: file descriptor.
* @line: buffer.
* @stack: que or stack.
* @line_number: line number of the command.
*/

void push_error(FILE *fd, char *line, stack_t *stack, int line_number)
{
	fprintf(stderr, "L%u usage: push integer\n", line_number);
	fclose(fd);
	_free(stack);
	exit(EXIT_FAILURE);
}

/**
* instr_error - Error handler for unknown instructions.
* @fd: file descriptor.
* @line: buffer.
* @stack: stack or queue.
* @line_n: line number of the command.
* @val: instruction.
*/

void instr_error(FILE *fd, char *line, stack_t *stack, char *val, int line_n)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", val);
	fclose(fd);
	free(line);
	_free(stack);
	exit(EXIT_FAILURE);
}
