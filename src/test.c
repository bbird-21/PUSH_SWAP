#include "../inc/tools.h"
#include <stdio.h>

t_error	return_value(void)
{
	return (no_error);
}

int	main(void)
{
	int	value;

	value = 0;
	value = return_value();
	printf("value : %d\n", value);
}