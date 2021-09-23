#include "monty.h"

/**
 * op_push - Calls Function
 * @stack: pointer to stack
 * @line_number: count of number of commands
 * Description: Function that adds a new node at the top of a stack
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *newNode;
	(void) line_number;

	if (!is_num(data.n))
	{
		fprintf(stderr, "L%u: usage: push integer\n", data.l_num);
		free(data.line), free_stack(data.head), fclose(data.fp);
		exit(EXIT_FAILURE);
	}

	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(data.line), free_stack(data.head), fclose(data.fp);
		exit(EXIT_FAILURE);
	}

	newNode->n = atoi(data.n);
	newNode->next = (*stack);
	newNode->prev = NULL;

	if (*stack)
		(*stack)->prev = newNode;
	(*stack = newNode);
}
