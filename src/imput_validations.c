/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imput_validations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susanamadriz <susanamadriz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:51:11 by sjuan-ma          #+#    #+#             */
/*   Updated: 2025/11/24 23:56:50 by susanamadri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicate(t_stack *a, int n)
{
	while (a)
	{
		if (a->value == n)
			return (1);
		a = a->next;
	}
	return (0);
}



validate_args(int argc,char argv, &a)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (!is_number(argv[i]))
			return (1);
		if (is_duplicate(argv[1]))
			return (1);
	}
	return (0);
}

// verificar que sea número, que no este repetido, que no este en orden, que pille numeros negativos positivos, que no haya 0 negativo, o dos -- seguidos, gestion de errores