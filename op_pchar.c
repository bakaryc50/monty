#include "monty.h"

/**
 * op_pchar - mode the first two nodes
 * @stack: pointer to stack
 * @line_number: count of number of commands
 */
void op_pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n",
				line_number);
		free(data.line), free_stack(data.head), fclose(data.fp);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 32 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n",
				line_number);
		free(data.line), free_stack(data.head), fclose(data.fp);
	}
	printf("%c\n", (*stack)->n);
}


