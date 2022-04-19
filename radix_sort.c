/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:19:53 by akadi             #+#    #+#             */
/*   Updated: 2022/04/19 00:25:02 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	find_big(t_list **stack_a, int len)
{
	int	i;
	int	big;

	i = 0;
	big = list_index(stack_a, 0);
	while (i < len)
	{
		if (big < list_index(stack_a, i))
			big = list_index(stack_a, i);
		i++;
	}
	return (big);
}

int	change_to_binary(int num)
{
	int	i;
	int	arr[50];

	i = 0;
	while (num > 0)
	{
		arr[i] = num % 2;
		num = num / 2;
		i++;
	}
	return (i);
}

void	radix_sort(t_list **stack_a, t_list **stack_b, int len)
{
	int	i;
	int	j;
	int	max;
	int	binlen;

	i = 0;
	max = ft_lstsize(*stack_a);
	binlen = change_to_binary(find_big(stack_a, len));
	while (i < binlen)
	{
		j = 0;
		while (j < max)
		{
			if ((((*stack_a)-> content >> i) & 1) == 1)
				*stack_a = rotate_ra(stack_a, *stack_a, 1);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		while (ft_lstsize(*stack_b))
			push_a(stack_a, stack_b);
		i++;
	}
}
