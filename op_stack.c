#include "monty.h"

/**
 * op_stack - set stack mode to last-in first-out (default)
 * @stack: stack pointer
 * @line_number: line number
 */
void op_stack(stack_t **stack __attribute__((unused)), unsigned int line_number __attribute__((unused)))
{
	op_env.mode = LIFO;
}
