# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 09:45:24 by jojeda-m          #+#    #+#              #
#    Updated: 2024/05/13 19:50:48 by jojeda-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libftprintf.a
CC			:= gcc
C_FLAGS		:= -Wall -Wextra -Werror
AR			:= ar
AR_FLAGS	:= rcs
LIBFT_DIR	:= ./libft
RM			:= rm -f
SRC_MAIN	:=\
			  ft_printf.c\
			  ft_parse.c\
			  ft_pfputchar.c\
			  ft_pfputstr.c\
			  ft_pfputnbr.c\
			  ft_itohex.c


OBJ_MAIN	:= $(SRC_MAIN:.c=.o)

LIBFT_MAKE	:= $(LIBFT_DIR)/Makefile

LIBFT_PATH	:= $(LIBFT_DIR)/libft.a

INCLUDES	:= -I. -I$(LIBFT_DIR)

all:		libft $(NAME)

libft:
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME):	$(OBJ_MAIN) $(LIBFT_PATH)
	$(AR) $(AR_FLAGS) $@ $(OBJ_MAIN) $(LIBFT_PATH)

%.o:		%.c
	$(CC) $(C_FLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C libft clean
	$(RM) $(OBJ_MAIN)

fclean:		clean
	$(MAKE) -C libft fclean
	$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re libft

