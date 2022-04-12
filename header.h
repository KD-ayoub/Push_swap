/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:52:58 by akadi             #+#    #+#             */
/*   Updated: 2022/04/12 01:11:25 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "libft/libft.h"



void	ft_lstprint(t_list *lst);
int		check_error(int ac, char **av);
char	**split_int(char **av);
int		duplicate(char **av);
int		ft_isint(char *number, char *max, char *min);
int		ft_isnbr(char *av);
t_list	**fill_stack(t_list **stack_a,char **split);
void	sort_stack(t_list **stack_a, t_list **stack_b);
t_list	swap_a(t_list **stack, t_list *list,int check);
t_list	swap_b(t_list **stack, t_list *list, int check);
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);
t_list	*rotate_rra(t_list **stack, t_list *list, int check);
t_list	*rotate_rrb(t_list **stack, t_list *list, int check);
t_list	*rotate_rb(t_list **stack, t_list *list, int check);
t_list	*rotate_ra(t_list **stack, t_list *list, int check);
void	swap_ss(t_list **stack_a, t_list **stack_b);
void	rotate_rr(t_list **stack_a, t_list **stack_b);
void	rotate_rrr(t_list **stack_a, t_list **stack_b);
void	sort_3(t_list **stack_a);
int		list_index(t_list **stack_a, int index);
void	sort_4and_5(t_list **stack_a, t_list **stack_b, int len);
int		position_smallest(t_list **stack_a, int small, int len);
int		find_smallest(t_list **stack_a, int len);
void	push_smallest(t_list **stack_a, t_list **stack_b, int len);
void	sort_100(t_list **stack_a, t_list **stack_b, int len);

#endif
