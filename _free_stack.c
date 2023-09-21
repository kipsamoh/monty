#include "monty.h"
/**
* free_stack - _frees a _doubly linked list
* @head: _head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *_aux;

	_aux = head;
	while (head)
	{
		_aux = head->next;
		free(head);
		head = _aux;
	}
}
