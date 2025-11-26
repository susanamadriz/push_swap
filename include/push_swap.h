/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susanamadriz <susanamadriz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:51:11 by sjuan-ma          #+#    #+#             */
/*   Updated: 2025/11/26 21:09:52 by susanamadri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

/* main */
void	push_swap(t_stack **a);

/* tiny sorts */
void	sort_two(t_stack **a);
void	sort_three(t_stack **a);

/* operations (ya tienes operations.c) */
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

/* stack utils */
t_stack	*stack_new(int value);
void	stack_add_back(t_stack **stack, t_stack *new);
int		stack_size(t_stack *stack);
void	free_stack(t_stack **stack);

/* validation */
int		validate_args(int argc, char **argv, t_stack **a);
int		is_number(const char *s);
int		is_duplicate(t_stack *a, int n);
long	ft_atol(const char *str);

/* utils */
int		is_sorted(t_stack *a);
void	print_error(void);
void	free_all(t_stack **a, t_stack **b);

#endif
