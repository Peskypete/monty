#include "monty.h"
car_t car = {NULL, NULL, NULL, 0};
/**
 * main - Implements the monty
 * @argc: Number of arguments
 * @argv: Array of char containing the arguments
 * Return : (0) on success
 */
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	car.file = file;
	while (line > 0)
	{
		content = NULL;
		line = getline(&content, &size, file);
		car.content = content;
		counter++;
		if (line > 0)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
		free_stack(stack);
		fclose(file);
		return (0);
}
