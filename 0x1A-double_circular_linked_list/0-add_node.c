#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <string.h>


/**
 * add_node_end - Add a new node to the end of a double circular linked list
 * @list: the list to modify
 * @str: the string to copy into the new node
 * Return: Address of the new node, or NULL on failure
 */
List *add_node_end(List **list, char *str)
{
	List *new_list, *head, *tail;

	if (!str)
		return (NULL);
	new_list = malloc(sizeof(List));
	if (!new_list)
		return (NULL);
	new_list->str = strdup(str);
	if (!new_list->str)
		return (NULL);
	if ((!list) || (*list == NULL))
	{
		new_list->next = new_list;
		new_list->prev = new_list;
		*list = new_list;
		return (new_list);
	}
	else
	{
		head = *list;
		tail = head->prev;
		new_list->next = head;
		new_list->prev = tail;
		tail->next = new_list;
		head->prev = new_list;
		return (new_list);
	}

}


/**
 * add_node_begin - Add a new node to the head of a double circular linked list
 * @list: the list to modify
 * @str: the string to copy into the new node
 * Return: Address of the new node, or NULL on failure
 */
List *add_node_begin(List **list, char *str)
{
	List *new_list, *head, *tail;

	if (!str)
		return (NULL);
	new_list = malloc(sizeof(List));
	if (!new_list)
		return (NULL);
	new_list->str = strdup(str);
	if (!new_list->str)
		return (NULL);
	if ((!list) || (!*list))
	{
		new_list->next = new_list;
		new_list->prev = new_list;
		*list = new_list;
		return (new_list);
	}
	else
	{
		head = *list;
		tail = head->prev;
		new_list->next = head;
		new_list->prev = tail;
		tail->next = new_list;
		head->prev = new_list;
		*list = new_list;
		return (new_list);
	}
}
