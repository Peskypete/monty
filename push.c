#include "monty.h"
/**
 * _push - Function to push a value to the stack
 * @head: A pointer to head of the stack
 * @value: Line number
 */
void _push(stack_t **head, unsigned int counter)
{
	int i, j = 0, flag = 0;

	if (car.arg)
	{
		if (car.arg[0] == '-')
			j++;
		for (; car.arg[j] != '\0'; j++)
		{
			if (car.arg[j] > 57 || car.arg[j] < 48)
				flag = 1;
			if (flag == 1)
			{
				fprintf(stderr, "L%d: usage: push integr\n", counter);
				fclose(car.file);
				free(car.content);
				free_stack(*head);
				exit(EXIT_FAILURE);
			}
		}
	}
	else
	{ 
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(car.file);
		free(car.content);
		free_stack(*head);
		exit(EXIT_FAILURE); 
	}
	i = atoi(car.arg);

	if (car.lifi == 0)
		prepend(head, i);
	else
		append(head, i);
}
