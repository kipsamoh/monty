#include "monty.h"
/**
  *f_rotr- _rotates the _stack to the _bottom
  *@head: _stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *_copy;

	_copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (_copy->next)
	{
		_copy = _copy->next;
	}
	_copy->next = *head;
	_copy->prev->next = NULL;
	_copy->prev = NULL;
	(*head)->prev = _copy;
	(*head) = _copy;
}
