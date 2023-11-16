#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - fonction d'opération
 * @s: passe l'opérateur en argument
 * Return: ops[i].f
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		return (ops[i].f);
		i++;
	}
}
