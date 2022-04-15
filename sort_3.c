/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:52:41 by akadi             #+#    #+#             */
/*   Updated: 2022/04/15 01:58:13 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
int	list_index(t_list **stack_a, int index)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *stack_a;
	while(tmp)
	{
		if (i == index)
			return (tmp -> content);
		tmp = tmp -> next;
		i++;
	}
	return (0);
}
void	sort_3(t_list **stack_a)
{
		if ((list_index(stack_a, 0) > list_index(stack_a, 1)) 
			&& (list_index(stack_a, 1) < list_index(stack_a, 2))
			&& (list_index(stack_a,2) > list_index(stack_a, 0)))
		{
			swap_a(stack_a, *stack_a, 1);
		}
		if ((list_index(stack_a, 0) > list_index(stack_a, 1))
			&& (list_index(stack_a, 1) > list_index(stack_a, 2)))
		{
			swap_a(stack_a, *stack_a, 1);
			rotate_rra(stack_a, *stack_a, 1);
		}
		if ((list_index(stack_a, 1) < list_index(stack_a, 2))
			&& (list_index(stack_a, 2) < list_index(stack_a, 0)))
			rotate_ra(stack_a, *stack_a, 1);
		if ((list_index(stack_a, 1) > list_index(stack_a, 2))
			&& (list_index(stack_a, 2) > list_index(stack_a, 0)))
		{
			swap_a(stack_a, *stack_a, 1);
			rotate_ra(stack_a, *stack_a, 1);
		}
		if ((list_index(stack_a, 0) < list_index(stack_a, 1)) 
			&& (list_index(stack_a, 1) > list_index(stack_a, 2))
			&& (list_index(stack_a,2) < list_index(stack_a, 0)))
			rotate_rra(stack_a, *stack_a, 1);
}