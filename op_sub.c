#include "monty.h"

/**
 * op_sub - replace first two nodes with substraction of the two
 * @stack: pointer to stack
 * @line_number: count of number of commands
 */
void op_sub(stack_t **stack, unsigned int line_number)
{
	int n_sub = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n",
			line_number);
		free(data.line), free_stack(data.head), fclose(data.fp);
		exit(EXIT_FAILURE);
	}
	n_sub = (*stack)->n;
	op_pop(stack, line_number);
	(*stack)->n -= n_sub;
}

