#include "monty.h"

/**
 * op_push - push an element onto the stack
 * @stack: stack pointer
 * @line_number: line number
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	const char *nstr = op_env.argv[1];

	if (!(nstr && isinteger(nstr)))
		pfailure("L%u: usage: push integer\n", line_number);

	new = malloc(sizeof(*new));
	if (!new)
		pfailure("Error: malloc failed\n");

	new->n = atoi(nstr);
	if (*stack)
	{
		new->prev = (*stack);
		new->next = (*stack)->next;
		new->next->prev = new;
		(*stack)->next = new;
		if (op_env.mode == LIFO)
			(*stack) = new;
	}
	else
	{
		new->prev = new;
		new->next = new;
		(*stack) = new;
	}
}
