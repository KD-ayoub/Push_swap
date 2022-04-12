/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:57:29 by akadi             #+#    #+#             */
/*   Updated: 2022/04/11 22:52:58 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	sort_100(t_list **stack_a, t_list **stack_b, int len)
{
	int	i;

	i = len;
	while (i > 0)
	{
		push_smallest(stack_a, stack_b, i);
		i--;
	}
	i = 0;
	while(++i <= len)
		push_a(stack_a, stack_b);
}