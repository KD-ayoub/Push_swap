/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:53:10 by akadi             #+#    #+#             */
/*   Updated: 2022/04/18 23:20:32 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (temp != NULL)
		while (temp->next)
			temp = temp->next;
	return (temp);
}
/*
int main()
{
	t_list *node1;
	t_list *head;
	head = malloc(sizeof(t_list));
	node1 = malloc(sizeof(t_list));
	head -> next = node1;
	node1 -> next = NULL;
	printf("%d",ft_lstsize(head));
	return 0;
}*/