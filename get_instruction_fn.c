#include "monty.h"

/**
 * get_instruction_fn - search for op matching function
 * @opcode: string that may match an op function
 *
 * Return: If found, pointer to function else NULL
 */
void (*get_instruction_fn(char *opcode))(stack_t **stack, unsigned int line_nu)
{
	instruction_t instructions[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pop", op_pop},
		{"pint", op_pint},
		{"add", op_add},
		{"swap", op_swap},
		{"nop", op_nop},
		{"sub", op_sub},
		{"mul", op_mul},
		{"div", op_div},
		{"mod", op_mod},
		{"pchar", op_pchar},
		{NULL, NULL}
	};
	int i;

	for (i = 0; instructions[i].opcode != NULL ; i++)
		if (strcmp(instructions[i].opcode, opcode) == 0)
			return (*(instructions[i]).f);
	return (NULL);
}
