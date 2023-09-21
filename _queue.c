#include "monty.h"
/**
 * f_queue - _prints the top
 * @head: _stack head
 * @counter: _line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - _add node to the tail _stack
 * @n: _new_value
 * @head: _head of the _stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *_aux;

	_aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (_aux->next)
			_aux = _aux->next;
	}
	if (!_aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		_aux->next = new_node;
		new_node->prev = _aux;
	}
}
