#include "lists.h"

/**
*print_list - program prints element of a list
*@h: the list linked
*Return: returns number of nodes encontered in the list
*/

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		x++;
		h = h->next_node;
	}
	return (x);
}
