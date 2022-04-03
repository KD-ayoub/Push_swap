#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
        write (1, "\n", 1);
        temp = temp->next;
    }
}
t_list swap_a(t_list **stack, t_list *list)
{
  int tmp;
  
  tmp = list -> content;
  list -> content = list -> next -> content;
  list -> next -> content = tmp;
  return (*list);
}
t_list *rotate_ra(t_list **stack, t_list *list)
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
  return (newh);
}
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
    ft_lstadd_front(stack_a, ft_lstnew (10));
    ft_lstadd_front(stack_a, ft_lstnew (15));
    ft_lstadd_front(stack_a, ft_lstnew (0));
    ft_lstprint (*stack_a);
    printf("SA----\n");
    swap_a(stack_a, *stack_a);
    ft_lstprint (*stack_a);
    printf("rra----\n");
    *stack_a = rotate_rra(stack_a, *stack_a);
    ft_lstprint (*stack_a);
    printf("ra----\n");
    *stack_a = rotate_ra(stack_a, *stack_a);
    ft_lstprint (*stack_a);
}