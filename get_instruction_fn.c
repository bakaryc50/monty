#include "monty.h"

/**
 * get_instruction_fn - get the function associated with an opcode
 * @opcode: the opcode to match
 *
 * Return: If opcode is NULL, return NULL. If match is found, return the
 * corresponding function. If match is not found, exit with EXIT_FAILURE.
 */
void (*get_instruction_fn)(const char *opcode, unsigned int line_number)
{
	static instruction_t instructions[] = {
		{"add",   op_add},
		{"div",   op_div},
		{"mod",   op_mod},
		{"mul",   op_mul},
		{"nop",   op_nop},
		{"pall",  op_pall},
		{"pchar", op_pchar},
		{"pint",  op_pint},
		{"pop",   op_pop},
		{"pstr",  op_pstr},
		{"push",  op_push},
		{"queue", op_queue},
		{"rotl",  op_rotl},
		{"rotr",  op_rotr},
		{"stack", op_stack},
		{"sub",   op_sub},
		{"swap",  op_swap},
		{0}
	};
	instruction_t *op = instructions;

	if (opcode)
	{
		while (op->opcode)
		{
			if (!strcmp(opcode, op->opcode))
				return (op->f);
			++op;
		}
		pfailure("L%u: unknown instruction %s\n", line_number, opcode);
	}
	return (NULL);
}