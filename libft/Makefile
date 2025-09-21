# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrosio <jbrosio@student.42malaga.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 16:44:12 by Juan              #+#    #+#              #
#    Updated: 2025/05/12 13:40:10 by jbrosio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Var to compilator
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

## Var to files ft
SRC = ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memset.c \
		ft_strlen.c \
		ft_bzero.c \
		ft_memmove.c \
		ft_memcpy.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_memcmp.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putnbr_u.c 

## var to files bonus
BONUS-SRC = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

OBJ = $(SRC:%.c=%.o)
BONUS-OBJ = $(BONUS-SRC:%.c=%.o)

## Rules
all: $(NAME)

## compile rule
run:
	@$(CC) $(CFLAGS) $(SRC) && ./a.out

## converting .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

## library
$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

## Bonus library
bonus: $(OBJ) $(BONUS-OBJ)
	ar rcs $(NAME) $^

## Remove rules
clean:
	rm -f $(OBJ) $(BONUS-OBJ)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
