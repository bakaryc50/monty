#include "monty.h"

/**
 * op_rotr - rotate downward (toward bottom of stack)
 * @stack: stack pointer
 * @line_number: line_number
 */
void op_rotr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	if (*stack)
		*stack = (*stack)->next;
}
