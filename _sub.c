#include "monty.h"
/**
  *f_sub- _subtration
  *@head: _stack head
  *@counter: _line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *_aux;
	int _sub, nodes;

	_aux = *head;
	for (nodes = 0; _aux != NULL; nodes++)
		_aux = _aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	_aux = *head;
	_sub = _aux->next->n - _aux->n;
	_aux->next->n = _sub;
	*head = _aux->next;
	free(_aux);
}
