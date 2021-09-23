#include "monty.h"

/**
 * op_pchar - print the character at the top of the stack
 * @stack: stack pointer
 * @line_number: line number
 */
void op_pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		if ((*stack)->n > 0 && (*stack)->n < 128)
			printf("%c\n", (*stack)->n);
		else
			pfailure("L%u: can't pchar, value out of range\n", line_number);
	}
	else
		pfailure("L%u: can't pchar, stack empty\n", line_number);


}


