# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 09:45:24 by jojeda-m          #+#    #+#              #
#    Updated: 2024/05/21 13:30:25 by jojeda-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libftprintf.a
CC			:= gcc
C_FLAGS		:= -Wall -Wextra -Werror
INCLUDE		:= libftprintf.h
AR			:= ar
AR_FLAGS	:= rcs
RANLIB		:= ranlib
RM			:= rm -f
SRC_MAIN	:=\
			  ft_printf.c\
			  ft_parse.c\
			  ft_pfputchar.c\
			  ft_pfputstr.c\
			  ft_pfputnbr.c\
			  ft_itohex.c\
			  ft_nbrlen.c\
			  ft_unsignednbr.c\
			  ft_pfpointer.c

OBJ_MAIN	:= $(SRC_MAIN:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ_MAIN)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJ_MAIN)
	$(RANLIB) $(NAME)

%.o:		%.c
	$(CC) $(C_FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_MAIN)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re

