#include "monty.h"

/**
 * op_pall - Calls Function
 * @stack: pointer to stack
 * @line_number: count of number of commands
 * Description: Function that prints all elements of stack
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int count;
	(void) line_number;

	tmp = *stack;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
}
