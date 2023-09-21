#include "monty.h"
/**
 * f_div - _divides the top two _elements of the stack.
 * @head: _stack head
 * @counter: line_number
 * Return: no return
*/
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	_aux = h->next->n / h->n;
	h->next->n = _aux;
	*head = h->next;
	free(h);
}
