/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susanamadriz <susanamadriz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:51:11 by sjuan-ma          #+#    #+#             */
/*   Updated: 2025/11/24 23:56:55 by susanamadri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

/* main flow */
void	push_swap(t_stack **a);

/* tiny sorts */
void	sort_two(t_stack **a);
void	sort_three(t_stack **a);

/* utils */
int		is_sorted(t_stack *a);
t_stack	*stack_new(int value);
void	stack_add_back(t_stack **stack, t_stack *new);
void	free_stack(t_stack **stack);

#endif
