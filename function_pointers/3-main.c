#include "3-calc.h"
/**
 * main - Gets input from user.
 * @argc: Number of command
 * @argv: Array containing command
 * Return: Zero
 **/
int main(int argc, char *argv[])
{
	int resultado;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	resultado = op(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", resultado);
	return (0);
}
