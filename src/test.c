#include <stdio.h>
#define NUMBER_STRING 12
#define MAX_STRING_SIZE 40
#include <string.h>

const char	**create_array(void)
{
	const char	instruction_arr[NUMBER_STRING][MAX_STRING_SIZE] = {"rr\n",
		"sa\n",
		"sb\n",
		"ss\n",
		"pa\n",
		"pb\n",
		"ra\n",
		"rb\n",
		"rr\n",
		"rra\n",
		"rrb\n",
		"rrr\n"
	};
	return (instruction_arr);
}

int	main(void)
{
// 	char arr[NUMBER_STRING][MAX_STRING_SIZE] =
// { "array of c string",
//   "is fun to use",
//   "make sure to properly",
//   "tell the array size"
// };

	int	i;
	char	**instruction_arr
	create_array
	i = 0;
	while (++i < NUMBER_STRING)
		printf("instruction_arr : %s\n", instruction_arr[i]);
}
