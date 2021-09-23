#include "monty.h"

/**
 * op_swap - swap the top two elements on the stack
 * @stack: stack pointeri
 * @line_number: line number
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *p = *stack;

	if (!(p && p != p->next))
		pfailure("L%u: can't swap, stack too short\n", line_number);

	p->n ^= p->prev->n;
	p->prev->n ^= p->n;
	p->n ^= p->prev->n;
}
