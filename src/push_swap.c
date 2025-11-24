/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susanamadriz <susanamadriz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:51:11 by sjuan-ma          #+#    #+#             */
/*   Updated: 2025/11/24 23:57:38 by susanamadri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack **a)
{
	int	size = 0;
	t_stack *tmp = *a;

	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}

	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
}
