#include "monty.h"
/**
 * _swap - Function to swap top two elements
 * @head: Stack head
 * @counter: line_number
 */
void _swap(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	int length = 0;
	int value;

	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(car.file);
		free(car.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	value = ptr->n;
	ptr->n = ptr->next->n;
	ptr->next->n = value;
}
