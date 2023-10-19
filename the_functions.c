#include "monty.h"

int value;

/**
* createNode - creates a new node.
* @n: the value of the node.
* Return: new node
*/

stack_t *createNode(int n)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exir(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}

/**
* push - pushes a new node with the given value to stack.
* @stack: double pointer to the head of the stack.
* @line_number: value to push.
*/

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void)line_number;

	new = createNode(value);

	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}

/**
* pall - prints all the values on the stack.
* @stack: double pointer to the head of the stack.
* @line_number: current line number.
*/

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t temp = NULL;
	(void)line_number;

	temp = *stack;

	while (temp != NULL)
	{
		fprintf(stdout, "%d\n", temp->n);
		temp = temp->next;
	}
}

/**
* pint - prints the value at the top of the stack.
* @stack: double pointer to the head of the stack.
* @line_number: current line number.
*/

void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		clean_stack(stack);
		exit(EXIT_FAILURE);
	}
	else
		fprintf(stdout, "%d\n", (*stack)->n)
}

/**
* pop - removes the top element of the stack.
* @stack: double pointer to the head of the stack.
* @line_number: current line number
*/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!*stack)
	{
		fprint(stderr, "L%u: can't pop an empty stack|n, line_number);
		_free(*stack);
		exit(EXIT_FAILURE)
	}
	else
	{
		temp = (*stock)->next;
		free(*stack);
		if (temp)
			temp->prev = NULL;
		*stack = temp;
	}
}