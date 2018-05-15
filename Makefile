# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/14 17:39:30 by cvlasin           #+#    #+#              #
#    Updated: 2018/02/15 18:43:09 by cvlasin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.PHONY: all, $(NAME), clean, fclean, re

NAME = fdf

cc = gcc
C_FLAGS = -Wall -Wextra -Werror -g
FRAM = -L minilibx -I minilibx -lmlx -framework OpenGL -framework AppKit -g
# FRAM = -framework OpenGL -framework AppKit minilibx/libmlx.a

OBJ_PATH = ./obj/
LFT_PATH = ./libft/

OBJ_NAME = $(SRC_NAME:.c=.o)
INC_NAME = fdf.h
SRC_NAME = main.c interactions.c citire.c desen.c

SRC = $(SRC_NAME)
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC = $(INC_PATH)

all: $(NAME)

$(NAME): $(OBJ)
		@make -C $(LFT_PATH)
		@$(CC) -o $(NAME) $(FRAM) -L $(LFT_PATH) -lft $^ -o $@ 

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
		@mkdir -p $(OBJ_PATH) 2> /dev/null || true
		@$(CC) $(C_FLAGS) $(INC) -o $@ -c $<

clean:
		@make -C $(LFT_PATH) clean
		@rm -rf $(OBJ_PATH)

fclean: clean
		@make -C $(LFT_PATH) fclean
		@rm -f $(NAME)
		
re: fclean all
