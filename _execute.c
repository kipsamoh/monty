#include "monty.h"
/**
* execute - _executes the opcode
* @stack: _head linked list - stack
* @counter: _line_counter
* @file: _poiner to monty file
* @content: _line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int x = 0;
	char *_op;

	_op = strtok(content, " \n\t");
	if (_op && _op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[x].opcode && _op)
	{
		if (strcmp(_op, opst[x].opcode) == 0)
		{	opst[x].f(stack, counter);
			return (0);
		}
		x++;
	}
	if (_op && opst[x].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, _op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
