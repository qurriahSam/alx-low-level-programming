#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed into it
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
