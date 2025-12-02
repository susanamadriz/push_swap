/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susanamadriz <susanamadriz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:51:11 by sjuan-ma          #+#    #+#             */
/*   Updated: 2025/12/02 21:43:16 by susanamadri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	main(int argc, char **argv)
// {
// 	t_stack	*a = NULL;
// 	t_stack	*tmp;
// 	int		i = 1;

// 	if (argc < 2)
// 		return (0);

// 	while (i < argc)
// 	{
// 		tmp = stack_new(atoi(argv[i]));
// 		stack_add_back(&a, tmp);
// 		i++;
// 	}

// 	if (!is_sorted(a))
// 		push_swap(&a);

// 	free_stack(&a);
// 	return (0);
// }

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	if (!validate_args(argc, argv, &a))
	{
		free_all(&a, &b);
		print_error();
		return (1);
	}
	if (!is_sorted(a))
		push_swap(&a);
	free_all(&a, &b);
	return (0);
}


