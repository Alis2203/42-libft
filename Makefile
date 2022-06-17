# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 18:32:47 by alcastel          #+#    #+#              #
#    Updated: 2022/06/17 12:40:47 by alcastel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isascii.c ft_memmove.c ft_strlcat.c ft_strtrim.c ft_atoi.c \
	  ft_isdigit.c ft_memset.c ft_strlcpy.c ft_substr.c ft_bzero.c \
	  ft_isprint.c ft_split.c ft_strlen.c ft_tolower.c ft_calloc.c \
	  ft_memchr.c ft_strchr.c ft_strncmp.c ft_toupper.c ft_isalnum.c \
	  ft_memcmp.c ft_strdup.c ft_strnstr.c ft_isalpha.c ft_memcpy.c \
	  ft_strjoin.c ft_strrchr.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_BON = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
OBJ_BON = $(SRC_BON:.c=.o)
LIB = libft.h
FLAGS = -Wall -Wextra -Werror 

%.o: %.c $(LIB)
	cc $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@ar -crs $(NAME) $^
	@echo "compilado $(NAME)"

bonus:	$(OBJ) $(OBJ_BON)
	@ar -rcs $(NAME) $^
	@touch $@

clean:
	@rm -f $(OBJ) $(OBJ_BON) bonus

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
