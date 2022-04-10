# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akadi <akadi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 20:27:44 by akadi             #+#    #+#              #
#    Updated: 2022/04/10 02:55:32 by akadi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CFLAGS = -Wall -Wextra -Werror
CC= cc
NAME=push_swap
FLAGS= -Wall -Wextra -Werror
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

OBJS=$(SRCS:.c=.o)
INCL= push_swap.h

all:$(NAME)
	@echo "\033[1;32m\
						██████╗░██╗░░░██╗░██████╗██╗░░██╗░░░░░░░██████╗░██╗░░░░░░░██╗░█████╗░██████╗░\n\
						██╔══██╗██║░░░██║██╔════╝██║░░██║░░░░░░██╔════╝░██║░░██╗░░██║██╔══██╗██╔══██╗\n\
						██████╔╝██║░░░██║╚█████╗░███████║█████╗╚█████╗░░╚██╗████╗██╔╝███████║██████╔╝\n\
						██╔═══╝░██║░░░██║░╚═══██╗██╔══██║╚════╝░╚═══██╗░░████╔═████║░██╔══██║██╔═══╝░\n\
						██║░░░░░╚██████╔╝██████╔╝██║░░██║░░░░░░██████╔╝░░╚██╔╝░╚██╔╝░██║░░██║██║░░░░░\n\
						╚═╝░░░░░░╚═════╝░╚═════╝░╚═╝░░╚═╝░░░░░░╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░░╚═╝╚═╝░░░░░\n\033[0m"
%.o: %.c $(INCL)
	$(CC) $(FLAGS) $< $(INCL) -c -g

$(NAME):$(OBJS)
	make -C ./libft
	mv ./libft/libft.a .
	$(CC) $(FLAGS) $(OBJS) libft.a -o $(NAME) -g

clean:
	rm -rf *.o
	rm -rf ./libft/*.o

fclean:clean
	rm -rf *.a
	rm -rf push_swap
	
re : fclean all

.PHONY: all gnl utils bonus clean fclean re