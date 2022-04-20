/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:57:29 by akadi             #+#    #+#             */
/*   Updated: 2022/04/20 02:21:43 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	find_index(int content, int *arr, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		if (arr[i] == content)
			return (i);
		i++;
	}
	return (-1);
}

t_list	*change_stack_a(t_list **stack_a, int *arr, int len)
{
	int		i;
	int		index;
	t_list	*p;

	i = 0;
	p = *stack_a;
	while (i < len)
	{
		index = find_index((*stack_a)-> content, arr, len);
		if (index != -1)
			(*stack_a)-> content = index;
		i++;
		(*stack_a) = (*stack_a)-> next;
	}
	return (p);
}

int	*sort_array(int *arr, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

void	sort_100(t_list **stack_a, t_list **stack_b, int len)
{
	int		i;
	int		*arr;
	int		*pt;
	t_list	*p;

	(void)stack_b;
	arr = malloc(sizeof(int) * len);
	p = *stack_a;
	pt = arr;
	i = 0;
	while (i < len)
	{
		arr[i] = p -> content;
		p = p -> next;
		i++;
	}
	pt = sort_array(pt, len);
	*stack_a = change_stack_a(stack_a, arr, len);
	radix_sort(stack_a, stack_b, len);
	free(arr);
}
