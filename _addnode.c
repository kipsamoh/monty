#include "monty.h"
/**
 * addnode - _add node to the head _stack
 * @head: _head of the stack
 * @n: _new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *_aux;

	_aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (_aux)
		_aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
