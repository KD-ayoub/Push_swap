/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:55:27 by akadi             #+#    #+#             */
/*   Updated: 2022/04/18 23:19:30 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

// void    ft_lstadd_back(t_list **lst, t_list *new)
// {
//     t_list    *temp;

//     if (lst)
//     {
//         if (*lst == NULL)
//             *lst = new;
//         else
//         {
//             temp = ft_lstlast((*lst));
//             temp->next = new;
//         }
//     }
// }
t_list	*ft_lstadd_back(t_list **lst, t_list *tnew)
{
	t_list	*p;

	if (*lst == NULL)
	{
		*lst = tnew;
		return (*lst);
	}
	else
	{
		p = NULL;
		p = *lst;
		while (p -> next)
			p = p -> next;
		p -> next = tnew;
	}
	return (*lst);
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