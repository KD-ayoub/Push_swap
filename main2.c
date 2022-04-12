#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>

typedef struct s_list
{
    int content;
    struct s_list *next;
}t_list ;

void    ft_lstadd_front(t_list **alst, t_list *tnew)
{
    tnew -> next = *alst;
    *alst = tnew;
}
t_list    *ft_lstnew(int content)
{
    t_list    *ptr;

    ptr = malloc(sizeof(t_list));
    if (!ptr)
        return (NULL);
    ptr -> content = content;
    ptr -> next = NULL;
    return (ptr);
}
void    ft_lstprint(t_list *lst)
{
    t_list    *temp;

    temp = lst;
    while (temp)
    {
        printf("%d\n",temp->content);
        temp = temp->next;
    }
}
void rotate_ra(t_list **stack, t_list **list)
{
  t_list *last;

  last = (*list);
  while (last -> next)
    last = last -> next;
  (*list) -> next = NULL;
  last -> next = *list;
}
t_list *rotate_rb(t_list **stack, t_list *list)
{
  t_list *p = list;
  t_list *newh;
  while (p -> next != NULL)
    p = p -> next;
  newh = list -> next;
  list -> next = NULL;
  p -> next = list;
  return (newh);
}
t_list *rotate_rrb(t_list **stack, t_list *list)
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
  return (newh);
}
t_list *rotate_rra(t_list **stack, t_list *list)
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
  return (newh);
}
void push_a(t_list **stack_a, t_list **stack_b)
{
  t_list *lista = *stack_a; 
  t_list *listb = *stack_b;
  
  *stack_b = (*stack_b) -> next;
  ft_lstadd_front(stack_a, listb);
}
void push_b(t_list **stack_a, t_list **stack_b)
{
  t_list *lista = *stack_a; 
  t_list *listb = *stack_b;
  
  *stack_a = (*stack_a) -> next;
  ft_lstadd_front(stack_b, lista);
}
t_list swap_b(t_list **stack, t_list *list)
{
  int tmp;
  
  tmp = list -> content;
  list -> content = list -> next -> content;
  list -> next -> content = tmp;
  return (*list);
}
t_list swap_a(t_list **stack, t_list *list)
{
  int tmp;
  
  tmp = list -> content;
  list -> content = list -> next -> content;
  list -> next -> content = tmp;
  return (*list);
}
int main ()
{
    t_list **stack_a;
    t_list **stack_b;
    stack_b = malloc(sizeof(t_list *));
    stack_a = malloc(sizeof(t_list *));
    int a;
    int b;
    int c;

    a = 5;
    b = 8;
    c = 2;
    *stack_b = NULL;
    *stack_a = NULL;
    ft_lstadd_back(stack_a, ft_lstnew (a));
    ft_lstadd_back(stack_a, ft_lstnew (b));
    ft_lstadd_back(stack_a, ft_lstnew (c));
    ft_lstprint (*stack_a);
    rotate_ra(stack_a, *stack_a);
    ft_lstprint(*stack_a);
    // push_b(stack_a, stack_b);
    // push_b(stack_a, stack_b);
    // push_b(stack_a, stack_b);
    // ft_lstprint (*stack_b);
    // swap_b(stack_b, *stack_b);
}