# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/25 21:12:02 by cvlasin           #+#    #+#              #
#    Updated: 2018/01/25 21:12:04 by cvlasin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	*.c

NAME = libft.a

OBJ =	*.o

$(NAME):
	cc -Wall -Wextra -Werror -I. -c $(SRCS) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean	all
