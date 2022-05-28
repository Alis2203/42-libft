# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 18:32:47 by alcastel          #+#    #+#              #
#    Updated: 2022/05/25 12:56:41 by alcastel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isascii.c ft_memmove.c ft_strlcat.c ft_strtrim.c ft_atoi.c \
	  ft_isdigit.c ft_memset.c ft_strlcpy.c ft_substr.c ft_bzero.c \
	  ft_isprint.c ft_split.c ft_strlen.c ft_tolower.c ft_calloc.c \
	  ft_memchr.c ft_strchr.c ft_strncmp.c ft_toupper.c ft_isalnum.c \
	  ft_memcmp.c ft_strdup.c ft_strnstr.c ft_isalpha.c ft_memcpy.c \
	  ft_strjoin.c ft_strrchr.c
OBJ = $(SRC:.c=.o)
LIB = libft.h
FLAGS = -Wall -Wextra -Werror -I$(LIB)

all: $(NAME)

%.o: %.c $(LIB)
	cc $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) $(LIB)
	@ar -crs $(NAME) $^

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re:	
	fclean 
	all

.PHONY: all clean fclean re
