#include '3-calch.h"
/**
 * get_op_func - function that selects the correct function
 * @s: This is the input operator
 * return: ....
 */
int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (*ops[i].op == *s)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
