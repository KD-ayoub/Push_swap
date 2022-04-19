# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akadi <akadi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 20:27:44 by akadi             #+#    #+#              #
#    Updated: 2022/04/19 03:15:14 by akadi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CFLAGS = -Wall -Wextra -Werror
CC= cc
NAME=push_swap
BNAME=checker
CFLAGS= -Wall -Wextra -Werror
SRCS=push_swap.c\
	check_error.c\
	instructions.c\
	sort_stack.c\
	ft_lstprint.c\
	ft_lstadd_back.c\
	ft_lstadd_front.c\
	ft_lstnew.c\
	sort_3.c\
	sort_4and_5.c\
	sort_100.c\
	radix_sort.c\
	ft_atoi.c\
	ft_itoa.c\
	ft_lstlast.c\
	ft_lstsize.c\
	ft_split.c\
	ft_strjoin.c\
	ft_strlen.c\
	ft_strncmp.c\
	split_int.c\
	ft_strdup.c\
	rotate_instructions.c\


BONUS_SRC = checker.c\
		open_prompt.c\
		get_next_line.c\


OBJS=$(SRCS:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
INCL= header.h

all:$(NAME)
	@echo "\033[1;32m\
						██████╗░██╗░░░██╗░██████╗██╗░░██╗░░░░░░░██████╗░██╗░░░░░░░██╗░█████╗░██████╗░\n\
						██╔══██╗██║░░░██║██╔════╝██║░░██║░░░░░░██╔════╝░██║░░██╗░░██║██╔══██╗██╔══██╗\n\
						██████╔╝██║░░░██║╚█████╗░███████║█████╗╚█████╗░░╚██╗████╗██╔╝███████║██████╔╝\n\
						██╔═══╝░██║░░░██║░╚═══██╗██╔══██║╚════╝░╚═══██╗░░████╔═████║░██╔══██║██╔═══╝░\n\
						██║░░░░░╚██████╔╝██████╔╝██║░░██║░░░░░░██████╔╝░░╚██╔╝░╚██╔╝░██║░░██║██║░░░░░\n\
						╚═╝░░░░░░╚═════╝░╚═════╝░╚═╝░░╚═╝░░░░░░╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░░╚═╝╚═╝░░░░░\n\033[0m"

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


$(BNAME):$(BONUS_OBJ) 
	$(CC) $(CFLAGS) $(BONUS_OBJ) $(filter-out push_swap.o, $(OBJS)) -o $(BNAME)

%.o: %.c $(INCL)
	$(CC) $(CFLAGS) -c $<

bonus : $(BNAME)

clean:
	rm -rf *.o

fclean:clean
	rm -rf push_swap
	rm -rf checker
	
re : fclean all

.PHONY: all bonus clean fclean re