#include "monty.h"

/**
 * op_add - add together the first two nodes
 * @stack: pointer to stack
 * @line_number: count of number of commands
 */
void op_add(stack_t **stack, unsigned int line_number)
{
	int n_sum = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n",
			line_number);
		free(data.line), free_stack(data.head), fclose(data.fp);
		exit(EXIT_FAILURE);
	}
	n_sum = (*stack)->n;
	op_pop(stack, line_number);
	(*stack)->n += n_sum;
}
