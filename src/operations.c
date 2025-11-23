/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susanamadriz <susanamadriz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:51:11 by sjuan-ma          #+#    #+#             */
/*   Updated: 2025/11/11 23:29:59 by susanamadri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_no_print(t_stack **s)
{
	t_stack *tmp;

	if (!s || !(*s) || !(*s)->next)
		return ;
	tmp = (*s)->next;
	(*s)->next = tmp->next;
	tmp->next = *s;
	*s = tmp;
}

static void	push_no_print(t_stack **dest, t_stack **src)
{
	t_stack *tmp;

	if (!src || !(*src))
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dest;
	*dest = tmp;
}

static void	rotate_no_print(t_stack **s)
{
	t_stack *first;
	t_stack *last;

	if (!s || !(*s) || !(*s)->next)
		return ;
	first = *s;
	*s = first->next;
	first->next = NULL;
	last = *s;
	while (last->next)
		last = last->next;
	last->next = first;
}

static void	rev_rotate_no_print(t_stack **s)
{
	t_stack *prev;
	t_stack *last;

	if (!s || !(*s) || !(*s)->next)
		return ;
	prev = NULL;
	last = *s;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *s;
	*s = last;
}

void	sa(t_stack **a)
{
	swap_no_print(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	swap_no_print(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	swap_no_print(a);
	swap_no_print(b);
	write(1, "ss\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	push_no_print(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push_no_print(b, a);
	write(1, "pb\n", 3);
}

void	ra(t_stack **a)
{
	rotate_no_print(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate_no_print(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate_no_print(a);
	rotate_no_print(b);
	write(1, "rr\n", 3);
}

void	rra(t_stack **a)
{
	rev_rotate_no_print(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rev_rotate_no_print(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rotate_no_print(a);
	rev_rotate_no_print(b);
	write(1, "rrr\n", 4);
}