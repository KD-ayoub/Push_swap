/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:54:38 by akadi             #+#    #+#             */
/*   Updated: 2022/04/20 22:38:54 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*swap_a(t_list **stack, t_list *list, int check)
{
	int	tmp;

	(void)stack;
	if (!ft_lstsize(list) || ft_lstsize(list) < 2)
		return (list);
	tmp = list -> content;
	list -> content = list -> next -> content;
	list -> next -> content = tmp;
	if (check == 1)
		write(1, "sa\n", 3);
	return (list);
}

t_list	*swap_b(t_list **stack, t_list *list, int check)
{
	int	tmp;

	(void)stack;
	if (!ft_lstsize(list) || ft_lstsize(list) < 2)
		return (list);
	tmp = list -> content;
	list -> content = list -> next -> content;
	list -> next -> content = tmp;
	if (check == 1)
		write(1, "sb\n", 3);
	return (list);
}

void	push_a(t_list **stack_a, t_list **stack_b, int check)
{
	t_list	*listb;

	listb = *stack_b;
	if (!ft_lstsize(*stack_b))
		return ;
	*stack_b = (*stack_b)-> next;
	ft_lstadd_front(stack_a, listb);
	if (check == 1)
		write(1, "pa\n", 3);
}

void	push_b(t_list **stack_a, t_list **stack_b, int check)
{
	t_list	*lista;

	lista = *stack_a;
	if (!ft_lstsize(*stack_a))
		return ;
	*stack_a = (*stack_a)-> next;
	ft_lstadd_front(stack_b, lista);
	if (check == 1)
		write(1, "pb\n", 3);
}
