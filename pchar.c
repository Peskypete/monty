#include "monty.h"
/**
 * _pchar - prints the ascii value of the top char
 * @head: head of the stack
 * @counter: line number
 */
void _pchar(stack_t **head, unsigned int counter)
{
	stack_t *ptr;

	ptr = *head;
	if (ptr == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(car.file);
		free(car.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (ptr->n > 127 || ptr->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(car.file);
		free(car.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ptr->n);
}
