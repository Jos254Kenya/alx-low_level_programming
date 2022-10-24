#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x)(void)(x)
/**
 * main - multiplies two numbs
 * @argc: argument
 * @argv: array of arg
 * Return: multiplication result else 1 for error
 */
int main(int argc, int *argv[])
{
	int i, j;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	return (0);
}
