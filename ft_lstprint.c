/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:51:37 by akadi             #+#    #+#             */
/*   Updated: 2022/04/14 02:09:11 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_lstprint(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		printf("%d  ",temp->content);
		temp = temp->next;
	}
}
