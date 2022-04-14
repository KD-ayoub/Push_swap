/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:23:43 by akadi             #+#    #+#             */
/*   Updated: 2022/04/14 02:23:06 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list **fill_stack(t_list **stack_a, char **split)
{
	int i;
	
	*stack_a = NULL;
	i = 0;
	while (split[i])
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(split[i])));
		i++;
	}
	// ft_lstprint(*stack_a);
	return (stack_a);
}
int main(int ac, char **av)
{
	char    **split;
	t_list  **stack_a;
	t_list  **stack_b;
	int	i;

	stack_a = malloc(sizeof(t_list *));
	stack_b = malloc(sizeof(t_list *));
	*stack_b = NULL;
	*stack_a = NULL;
	if (ac == 1)
		return (0);
	split = split_int(av);
	if (!check_error(ac, split))
	{
		write(1, "Error\n",6);
		exit(0);
	}
	else
	{
		i = 0;
		while (split[i])
		{
			ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(split[i])));
			i++;
		}
		//stack_a = fill_stack(stack_a,split);
		//ft_lstprint(*stack_a);
	}
	//sort_stack(stack_a, stack_b);
	return (0);
}