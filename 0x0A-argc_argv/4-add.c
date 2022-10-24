#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * num_checker - checks for given char if num or not
 * @a: char to be checked
 * Return: 1 if is a num, 0 otherwise
 */
int num_checker(char *a)
{
	int a, num, len;

	i = 0;
	num = 0;
	len = strlen(a);
	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}
/**
 * main - add two positive numbers
 * @argc: argumnet
 * @argv: array of arg
 * Return: addition result or 1 for fail
 */
int main(int argc, char *argv[])
{
	int i, num, sum;

	sum = 0;
	for (i = 1; i < argv[i]; i++)
	{
		num = num_checker(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
