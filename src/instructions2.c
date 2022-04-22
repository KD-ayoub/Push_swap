/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:50:56 by akadi             #+#    #+#             */
/*   Updated: 2022/04/20 22:40:55 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	swap_ss(t_list **stack_a, t_list **stack_b, int check)
{
	*stack_a = swap_a(stack_a, *stack_a, 0);
	*stack_b = swap_b(stack_b, *stack_b, 0);
	if (check == 1)
		write(1, "ss\n", 3);
}

void	rotate_rr(t_list **stack_a, t_list **stack_b, int check)
{
	*stack_a = rotate_ra(stack_a, *stack_a, 0);
	*stack_b = rotate_rb(stack_b, *stack_b, 0);
	if (check == 1)
		write(1, "rr\n", 3);
}

void	rotate_rrr(t_list **stack_a, t_list **stack_b, int check)
{
	*stack_a = rotate_rra(stack_a, *stack_a, 0);
	*stack_b = rotate_rrb(stack_b, *stack_b, 0);
	if (check == 1)
		write(1, "rrr\n", 3);
}
