#include "monty.h"

/**
 * main - Monty code interpreter
 * @argc: number of arguments
 * @argv: Monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	bus_t bus = {NULL, NULL, NULL, 0, 0};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	bus.file = fopen(argv[1], "r");

	if (!bus.file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&(bus.content), &(bus.size), bus.file) != -1)
	{
		bus.line_number++;
		execute(&bus);
	}

	free_stack(bus.stack);
	fclose(bus.file);
	free(bus.content);

	return (0);
}
