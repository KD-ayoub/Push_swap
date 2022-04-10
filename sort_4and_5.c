/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4and_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 01:41:43 by akadi             #+#    #+#             */
/*   Updated: 2022/04/10 02:48:14 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	find_smallest(t_list **stack_a, int len)
{
	int	i;
	int	small;

	i = 0;
	small = list_index(stack_a, 0);
	while(i < len)
	{
		if (small > list_index(stack_a, i))
			small = list_index(stack_a, i);
		i++;
	}
	return (small);
}
int	position_smallest(t_list **stack_a, int small, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (small == list_index(stack_a, i))
			return (i);
		i++;
	}
	return (0);
}
void	sort_4and_5(t_list **stack_a, t_list **stack_b, int len)
{
	if (len == 4)
	{
		if (position_smallest(stack_a, find_smallest(stack_a, len), len) < len/2)
		{
			while (((*stack_a) -> content) != find_smallest(stack_a, len))
				rotate_ra(stack_a, *stack_a, 1);
		}
		else
		{
			while(((*stack_a) -> content) != find_smallest(stack_a,len))
				rotate_rra(stack_a, *stack_a, 1);
		}
	}
}