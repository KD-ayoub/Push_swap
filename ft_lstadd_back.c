/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:55:27 by akadi             #+#    #+#             */
/*   Updated: 2022/04/06 20:51:55 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_lstadd_back(t_list **lst, t_list *tnew)
{
	t_list	*p;

	p = NULL;
	if (*lst == NULL)
	{
		*lst = tnew;
		return ;
	}
	p = *lst;
	while (p -> next)
		p = p -> next;
	p -> next = tnew;
}
/*
int main()
{
    t_list *node2;
    t_list *node1;
    t_list *head;
    head = malloc(sizeof(t_list));
    node1 = malloc(sizeof(t_list));
    node2 = malloc(sizeof(t_list));
    head -> next = node1;
    node1 -> next = NULL;
    ft_lstadd_back(&head,node2 );
    return 0;
}*/
