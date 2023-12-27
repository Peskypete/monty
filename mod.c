#include "monty.h"
/**
 * _mod - Function to add top two elements
 * @head: Stack head
 * @counter: line number
 */
void _mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
	result = ptr->n % ptr->next->n;
	ptr->next->n = result;
	*head = ptr->next;
	free(ptr);
}

