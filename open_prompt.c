/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_prompt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 00:10:51 by akadi             #+#    #+#             */
/*   Updated: 2022/04/19 03:12:45 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	array_instructions(char *str)
{
	char	**arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(char *) * 12);
	arr[0] = ft_strdup("sa");
	arr[1] = ft_strdup("sb");
	arr[3] = ft_strdup("ss");
	arr[4] = ft_strdup("ra");
	arr[5] = ft_strdup("rb");
	arr[6] = ft_strdup("rr");
	arr[7] = ft_strdup("rra");
	arr[8] = ft_strdup("rrb");
	arr[9] = ft_strdup("rrr");
	arr[10] = ft_strdup("pa");
	arr[11] = ft_strdup("pb");
	arr[12] = 0;
	while(arr[i])
		if (!ft_strncmp(arr[i], str, ft_strlen(str)-1))
			return (1);
	return (0);
}
void	open_prompt(t_list **stack_a, t_list **stack_b)
{
	char	*str;
	//t_list	**instructions;

	(void)stack_b;
	(void)stack_a;
	str = ft_strdup("");
	while (str)
	{
		free(str);
		str =get_next_line(0);
		if (!array_instructions(str))
		{
			write(1, "Error", 5);
			exit(0);
		}
	}
}
