/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:54:38 by akadi             #+#    #+#             */
/*   Updated: 2022/04/06 18:25:40 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list swap_a(t_list **stack, t_list *list,int check)
{
  int tmp;
  
  tmp = list -> content;
  list -> content = list -> next -> content;
  list -> next -> content = tmp;
  if (check == 1)
    write(1, "sa\n", 3);
  return (*list);
}

t_list swap_b(t_list **stack, t_list *list, int check)
{
  int tmp;
  
  tmp = list -> content;
  list -> content = list -> next -> content;
  list -> next -> content = tmp;
  if (check == 1)
    write(1, "sb\n", 3);
  return (*list);
}

void push_a(t_list **stack_a, t_list **stack_b)
{
  t_list *lista = *stack_a; 
  t_list *listb = *stack_b;
  
  *stack_b = (*stack_b) -> next;
  ft_lstadd_front(stack_a, listb);
  write(1, "pa\n", 3);
}

void push_b(t_list **stack_a, t_list **stack_b)
{
  t_list *lista = *stack_a; 
  t_list *listb = *stack_b;
  
  *stack_a = (*stack_a) -> next;
  ft_lstadd_front(stack_b, lista);
  write(1, "pb\n", 3);
}

t_list *rotate_rra(t_list **stack, t_list *list, int check)
{
  t_list *p = list;
  t_list *newh;
  while (p)
  {
    if (p -> next -> next == NULL)
      break;
    p = p -> next;
  }
  newh = p -> next;
  p -> next = NULL;
  newh -> next = list;
  *stack = newh;
  write(1, "rra\n", 4);
  return (newh);
}

t_list *rotate_rrb(t_list **stack, t_list *list, int check)
{
  t_list *p = list;
  t_list *newh;
  while (p)
  {
    if (p -> next -> next == NULL)
      break;
    p = p -> next;
  }
  newh = p -> next;
  p -> next = NULL;
  newh -> next = list;
  *stack = newh;
  write(1, "rrb\n", 4);
  return (newh);
}

t_list *rotate_rb(t_list **stack, t_list *list, int check)
{
  t_list *p = list;
  t_list *newh;
  while (p -> next != NULL)
    p = p -> next;
  newh = list -> next;
  list -> next = NULL;
  p -> next = list;
  if (check == 1)
    write(1, "rb\n", 3);
  return (newh);
}

t_list *rotate_ra(t_list **stack, t_list *list, int check)
{
  t_list *p = list;
  t_list *newh;
  while (p -> next != NULL)
    p = p -> next;
  newh = list -> next;
  list -> next = NULL;
  p -> next = list;
  if (check == 1)
    write(1, "ra\n", 3);
  return (newh);
}

void swap_ss(t_list **stack_a, t_list **stack_b)
{
    swap_a(stack_a, *stack_a, 0);
    swap_b(stack_b, *stack_b, 0);
    write(1, "ss\n", 3);
}

void rotate_rr(t_list **stack_a, t_list **stack_b)
{
    rotate_ra(stack_a, *stack_a, 0);
    rotate_rb(stack_b, *stack_b, 0);
    write(1, "rr\n", 3);
}

void rotate_rrr(t_list **stack_a, t_list **stack_b)
{
    rotate_rra(stack_a, *stack_a, 0);
    rotate_rrb(stack_b, *stack_b, 0);
    write(1, "rrr\n", 3);
}