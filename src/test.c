#include "tools.h"
#include <stdio.h>

int main(void)
{
	t_cost cost;

	cost.cost_a = 3;
	cost.cost_b = 3;

	while (cost.cost_a > 0)
		cost.cost_a--;
	printf("cost : %d\n", cost.cost_a);
}
