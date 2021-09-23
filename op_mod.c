#include "monty.h"

/**
 * op_mod - mode the first two nodes
 * @stack: pointer to stack
 * @line_number: count of number of commands
 */
void op_mod(stack_t **stack, unsigned int line_number)
{
	int n_mod = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n",
				line_number);
		free(data.line), free_stack(data.head), fclose(data.fp);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n",
				line_number);
		free(data.line), free_stack(data.head), fclose(data.fp);
		exit(EXIT_FAILURE);
	}
	n_mod = (*stack)->n;
	op_pop(stack, line_number);
	(*stack)->n %= n_mod;
}

