/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:03:56 by akadi             #+#    #+#             */
/*   Updated: 2022/03/11 19:58:15 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main ()
{
    t_list **stack_a;
    stack_a = malloc(sizeof(t_list *));
    int a;
    int b;
    int c;

    a = 5;
    b = 8;
    c = 2;
    *stack_a = NULL;
    ft_lstadd_front(stack_a, ft_lstnew (a));
    ft_lstadd_front(stack_a, ft_lstnew (b));
    ft_lstadd_front(stack_a, ft_lstnew (c));
    ft_lstprint (*stack_a);
}