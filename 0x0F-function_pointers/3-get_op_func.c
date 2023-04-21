#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects correct function to perfom
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (ops5[i].op != NULL && *(ops[i] != *s)
			i++;

			return (ops[i].f);
			}
