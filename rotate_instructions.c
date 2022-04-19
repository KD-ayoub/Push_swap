/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_instructions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:18:51 by akadi             #+#    #+#             */
/*   Updated: 2022/04/19 00:26:44 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*rotate_rra(t_list **stack, t_list *list, int check)
{
	t_list	*p;
	t_list	*newh;

	p = list;
	if (!ft_lstsize(*stack))
	{
		write(1, "Error", 5);
		exit(0);
	}
	while (p)
	{
		if (p -> next -> next == NULL)
			break ;
		p = p -> next;
	}
	newh = p -> next;
	p -> next = NULL;
	newh -> next = list;
	*stack = newh;
	if (check == 1)
		write(1, "rra\n", 4);
	return (newh);
}

t_list	*rotate_rrb(t_list **stack, t_list *list, int check)
{
	t_list	*p;
	t_list	*newh;

	p = list;
	if (!ft_lstsize(*stack))
	{
		write(1, "Error", 5);
		exit(0);
	}
	while (p)
	{
		if (p -> next -> next == NULL)
			break ;
		p = p -> next;
	}
	newh = p -> next;
	p -> next = NULL;
	newh -> next = list;
	*stack = newh;
	if (check == 1)
		write(1, "rrb\n", 4);
	return (newh);
}

t_list	*rotate_rb(t_list **stack, t_list *list, int check)
{
	t_list	*p;
	t_list	*newh;

	(void)stack;
	p = list;
	if (!ft_lstsize(list))
	{
		write(1, "Error", 5);
		exit(0);
	}
	while (p -> next != NULL)
		p = p -> next;
	newh = list -> next;
	list -> next = NULL;
	p -> next = list;
	if (check == 1)
		write(1, "rb\n", 3);
	return (newh);
}

t_list	*rotate_ra(t_list **stack, t_list *list, int check)
{
	t_list	*p;
	t_list	*newh;

	(void)stack;
	p = list;
	if (!ft_lstsize(list))
	{
		write(1, "Error", 5);
		exit(0);
	}
	while (p -> next != NULL)
		p = p -> next;
	newh = list -> next;
	list -> next = NULL;
	p -> next = list;
	if (check == 1)
		write(1, "ra\n", 3);
	return (newh);
}
