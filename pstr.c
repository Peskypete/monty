#include "monty.h"
/**
 * _pstr - Prints the string at top of the stack
 * @head: Stack head
 * @counter: line number
 */
void _pstr(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	(void)counter;

	ptr = *head;
	while (ptr != NULL)
	{
		if (ptr->n > 127 || ptr->n <= 0)
		{
			break;
		}
		printf("%c", ptr->n);
		ptr = ptr->next;
	}
	printf("\n");
}
