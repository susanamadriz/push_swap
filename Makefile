# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: susanamadriz <susanamadriz@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/02 19:51:11 by sjuan-ma          #+#    #+#              #
#    Updated: 2025/11/25 00:03:15 by susanamadri      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME	= push_swap
# CC		= cc
# CFLAGS	= -Wall -Wextra -Werror
# RM		= rm -f

# SRC_DIR	= src
# SRC		= $(SRC_DIR)/main.c \
# 		  $(SRC_DIR)/push_swap.c \
# 		  $(SRC_DIR)/stack_utils.c \
# 		  $(SRC_DIR)/operations.c \
# 		  $(SRC_DIR)/utils.c

# OBJ		= $(SRC:.c=.o)

# INCLUDE	= -I include
# LIBFT_DIR = libft
# LIBFT = $(LIBFT_DIR)/libft.a

# all: $(NAME)

# $(NAME): $(LIBFT) $(OBJ)
# 	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
# 	@echo "Compilado correctamente: $(NAME)"

# $(LIBFT):
# 	@make -C $(LIBFT_DIR)

# clean:
# 	@$(RM) $(OBJ)
# 	@make clean -C $(LIBFT_DIR)
# 	@echo "Limpieza completada"

# fclean: clean
# 	@$(RM) $(NAME)
# 	@make fclean -C $(LIBFT_DIR)
# 	@echo "Binarios eliminados"

# re: fclean all

# .PHONY: all clean fclean re


NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude

SRC = src/main.c src/push_swap.c src/utils.c src/sort_two.c src/sort_three.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

