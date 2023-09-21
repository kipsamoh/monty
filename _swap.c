#include "monty.h"
/**
 * f_swap - _adds the top two _elements of the stack.
 * @head: _stack head
 * @counter: _line_number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int _len = 0, _aux;

	h = *head;
	while (h)
	{
		h = h->next;
		_len++;
	}
	if (_len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	_aux = h->n;
	h->n = h->next->n;
	h->next->n = _aux;
}
