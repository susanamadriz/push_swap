#include "push_swap.h"

void	free_all(t_stack **a, t_stack **b)
{
	free_stack(a);
	free_stack(b);
}