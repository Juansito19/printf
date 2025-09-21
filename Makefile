# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrosio <jbrosio@student.42malaga.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/10 14:35:00 by jbrosio           #+#    #+#              #
#    Updated: 2025/05/30 11:26:54 by jbrosio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# library var
NAME = libftprintf.a

# compilate vars
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

# dictionary vars
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

# files vars
SRC = ft_printf.c ft_searchtype.c ft_hex_control.c
OBJ = $(SRC:%.c=%.o)

# Start process
all: $(NAME)

# Compilate my main
run: $(LIBFT_DIR)
	@$(CC) $(CFLAGS) $(SRC) $(LIBFT) && ./a.out

# Compilate files to .o
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Compilate library printf
$(NAME): $(OBJ) $(LIBFT)
	@cp $(LIBFT) $(NAME)
	@$(AR) $(NAME) $(OBJ)

# Compilate library libft
$(LIBFT):
	@make -C $(LIBFT_DIR)

# Removes rules #
clean:
	@$(RM) $(OBJ)
	@make clean -C $(LIBFT_DIR)

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C $(LIBFT_DIR)

##################

# Remove first and call compilate
re: fclean all

.PHONY: all clean fclean re
