#include "monty.h"

/**
 * op_pop - Calls Function
 * @stack: Pointer to stack
 * @line_number: count...
 * Description: Function deletes an element of the stack
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void) line_number;

	if (!tmp)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n",
				data.l_num);
		free(data.line), free_stack(data.head), fclose(data.fp);
		exit(EXIT_FAILURE);
	}
	if (tmp->next == NULL)
	{
		free(tmp);
		*stack = NULL;
		return;
	}
	(*stack) = tmp->next;
	(*stack)->next = tmp->next->next;
	(*stack)->prev = NULL;
	free(tmp);
}

