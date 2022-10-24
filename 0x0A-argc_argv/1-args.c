#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: arg count
 * @argv: array of pointers to string arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/* to supress unused variable warning we do: */
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
