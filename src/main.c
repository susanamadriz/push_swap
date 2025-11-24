/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susanamadriz <susanamadriz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:51:11 by sjuan-ma          #+#    #+#             */
/*   Updated: 2025/11/24 23:57:17 by susanamadri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a = NULL;
	t_stack	*tmp;
	int		i = 1;

	if (argc < 2)
		return (0);

	while (i < argc)
	{
		tmp = stack_new(atoi(argv[i]));
		stack_add_back(&a, tmp);
		i++;
	}

	if (!is_sorted(a))
		push_swap(&a);

	free_stack(&a);
	return (0);
}

