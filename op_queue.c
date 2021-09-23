#include "monty.h"

/**
 * op_queue - set stack mode to first-in first-out
 * @stack: stack pointer
 * @line_number: line number
 */
void op_queue(stack_t **stack __attribute__((unused)), unsigned int line_number __attribute__((unused)))
{
	op_env.mode = FIFO;
}
