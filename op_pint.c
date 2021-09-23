#include "monty.h"

/**
 * op_pint - print the value at the top of the stack
 * @stack: stack pointer
 * @line_number: line number
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack)
		printf("%d\n", (*stack)->n);
	else
		pfailure("L%u: can't pint, stack empty\n", line_number);
}
