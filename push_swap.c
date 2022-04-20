/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:23:43 by akadi             #+#    #+#             */
/*   Updated: 2022/04/20 02:41:12 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	free_all(t_list **stack_a, t_list **stack_b, char **split, int ac)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		free(split[i++]);
	}
	free(split);
	free(stack_a);
	free(stack_b);
}

t_list	**fill_stack(t_list **stack_a, char **split)
{
	int	i;

	*stack_a = NULL;
	i = 0;
	while (split[i])
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(split[i])));
		i++;
	}
	return (stack_a);
}


int	main(int ac, char **av)
{
	char	**split;
	t_list	**stack_a;
	t_list	**stack_b;

	stack_a = malloc(sizeof(t_list *));
	stack_b = malloc(sizeof(t_list *));
	*stack_b = NULL;
	*stack_a = NULL;
	if (ac == 1)
		return (0);
	split = split_int(av);
	if (!check_error(ac, split))
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	stack_a = fill_stack(stack_a, split);
	sort_stack(stack_a, stack_b);
	free_all(stack_a, stack_b, split, ac - 1);
	return (0);
}
