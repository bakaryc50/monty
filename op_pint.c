#include "monty.h"

/**
 * op_pint - Prints head of the function
 * @stack: Pointer to stack
 * @line_number: count...
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (!(*stack))
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n",
			data.l_num);
		free(data.line), free_stack(data.head), fclose(data.fp);
		exit(EXIT_FAILURE);
	}
	if ((*stack) != NULL)
		printf("%d\n", (*stack)->n);
}
