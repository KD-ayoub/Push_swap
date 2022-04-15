/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:52:58 by akadi             #+#    #+#             */
/*   Updated: 2022/04/15 02:13:49 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
//#include "libft/libft.h"

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}t_list;

int		ft_atoi(const char *str);
char **split_int(char **av);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s);
size_t		ft_strlen(const char *s);
//char	*ft_strjoin(char const *s1, char const *s2);
char    *ft_strjoin(char *buffers, char *buff);
char	**ft_split(char const *s, char c);
int		ft_lstsize(t_list *lst);
char	*ft_itoa(int n);
int		ft_isdigit(int c);
void	ft_lstprint(t_list *lst);
void	ft_lstadd_front(t_list **alst, t_list *tnew);
t_list	*ft_lstlast(t_list *lst);
//void    ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstadd_back(t_list **lst, t_list *tnew);
t_list	*ft_lstnew(int content);
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
void	radix_sort(t_list **stack_a, t_list **stack_b, int len);


#endif
