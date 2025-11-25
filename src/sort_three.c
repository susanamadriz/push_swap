/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susanamadriz <susanamadriz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:51:11 by sjuan-ma          #+#    #+#             */
/*   Updated: 2025/11/25 00:04:19 by susanamadri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	int x = (*a)->value;
	int y = (*a)->next->value;
	int z = (*a)->next->next->value;

	if (x > y && y < z && x < z)
	{
		write(1, "sa\n", 3);
		int tmp = (*a)->value; (*a)->value = (*a)->next->value; (*a)->next->value = tmp;
	}
	else if (x > y && y > z && x > z)
	{
		write(1, "sa\n", 3);
		int tmp = (*a)->value; (*a)->value = (*a)->next->value; (*a)->next->value = tmp;
		write(1, "rra\n", 4);
		int last = z;
		(*a)->next->next->value = y;
		(*a)->next->value = x;
		(*a)->value = last;
	}
	else if (x > y && y < z && x > z)
	{
		write(1, "ra\n", 3);
		int first = x;
		(*a)->value = y;
		(*a)->next->value = z;
		(*a)->next->next->value = first;
	}
	else if (x < y && y > z && x < z)
	{
		write(1, "sa\n", 3);
		int tmp = (*a)->value; (*a)->value = (*a)->next->value; (*a)->next->value = tmp;
		write(1, "ra\n", 3);
		int first = (*a)->value;
		(*a)->value = (*a)->next->value;
		(*a)->next->value = z;
		(*a)->next->next->value = first;
	}
	else if (x < y && y > z && x > z)
	{
		write(1, "rra\n", 4);
		int last = z;
		(*a)->next->next->value = y;
		(*a)->next->value = x;
		(*a)->value = last;
	}
}
