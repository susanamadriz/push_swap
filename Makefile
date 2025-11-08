
NAME	= push_swap
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

SRC_DIR	= src
SRC		= $(SRC_DIR)/main.c \
		  $(SRC_DIR)/push_swap.c \
		  $(SRC_DIR)/stack_utils.c \
		  $(SRC_DIR)/operations.c \
		  $(SRC_DIR)/utils.c

OBJ		= $(SRC:.c=.o)

INCLUDE	= -I include
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "Compilado correctamente: $(NAME)"

$(LIBFT):
	@make -C $(LIBFT_DIR)

clean:
	@$(RM) $(OBJ)
	@make clean -C $(LIBFT_DIR)
	@echo "Limpieza completada"

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C $(LIBFT_DIR)
	@echo "Binarios eliminados"

re: fclean all

.PHONY: all clean fclean re
