#include "monty.h"
/**
 * _div - Function to add top two elements
 * @head: Stack head
 * @counter: line number
 */
void _div(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	int result = 0;
	int i = 0;

	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(car.file);
		free(car.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	if (ptr->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(car.file);
		free(car.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = ptr->next->n / ptr->n;
	ptr->next->n = result;
	*head = ptr->next;
	free(ptr);
}

