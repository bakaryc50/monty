#include "monty.h"

/**
 * op_rotl - rotate upward (toward top of stack)
 * @stack: stack pointer
 * @line_number: line number
 */
void op_rotl(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	if (*stack)
		*stack = (*stack)->prev;
}
