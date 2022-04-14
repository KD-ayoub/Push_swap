/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:55:27 by akadi             #+#    #+#             */
/*   Updated: 2022/04/14 00:40:27 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_lstadd_back(t_list **lst, t_list *tnew)
{
	t_list	*temp;

	temp = ft_lstlast(*lst);
	if (temp)
		temp -> next = tnew;
	else if (temp == NULL)
		*lst = tnew;
}
// void	ft_lstadd_back(t_list *lst, t_list *tnew)
// {
// 	t_list	*p;

// 	if (lst == NULL)
// 	{
// 		lst = tnew;
// 		return ;
// 	}
// 	p = lst;
// 	while (p -> next)
// 		p = p -> next;
// 	p -> next = tnew;
// }

