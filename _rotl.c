#include "monty.h"
/**
  *f_rotl- _rotates the _stack to the top
  *@head: _stack head
  *@counter: _line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *_aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	_aux = (*head)->next;
	_aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = _aux;
}
