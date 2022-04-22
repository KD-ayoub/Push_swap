/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:42:56 by akadi             #+#    #+#             */
/*   Updated: 2022/04/19 00:48:24 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	stack_issorted(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp -> next)
	{
		if (tmp -> content > tmp -> next -> content)
			return (0);
		tmp = tmp -> next;
	}
	return (1);
}

void	sort_by_len(t_list **stack_a, t_list **stack_b, int len)
{
	if (len == 3)
		sort_3(stack_a);
	if (len > 3 && len <= 5)
		sort_4and_5(stack_a, stack_b, len);
	if (len >= 6)
		sort_100(stack_a, stack_b, len);
}

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		len;

	len = 0;
	tmp = *stack_a;
	while (tmp)
	{
		tmp = tmp -> next;
		len++;
	}
	if (stack_issorted(stack_a) || len == 1)
		exit(0);
	if (len == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			swap_a(stack_a, *stack_a, 1);
		else
			exit(0);
	}
	sort_by_len(stack_a, stack_b, len);
}
