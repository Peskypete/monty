#include "monty.h"
/**
 * _pint - Print the top of the stack
 * @head: stack head
 * @counter: line number
 */
void _pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(car.file);
		free(car.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
