/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:23:43 by akadi             #+#    #+#             */
/*   Updated: 2022/04/17 00:09:14 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list **fill_stack_bonus(t_list **stack_a, char **split)
{
	int i;
	
	*stack_a = NULL;
	i = 0;
	while (split[i])
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(split[i])));
		i++;
	}
	return (stack_a);
}
int main(int ac, char **av)
{
	char    **split;
	t_list  **a;
	t_list  **b;

	(void)av;
	a = malloc(sizeof(t_list *));
	b = malloc(sizeof(t_list *));
	*b = NULL;
	*a = NULL;
	if (ac == 1)
		return (0);
	split = split_int(av);
	if (!check_error(ac, split))
	{
		write(1, "Error\n",6);
		exit(0);
	}
	a = fill_stack_bonus(a, split);
	open_prompt(a, b);
	return (0);
}