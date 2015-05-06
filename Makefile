# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/29 15:35:12 by ghilbert          #+#    #+#              #
#    Updated: 2015/05/06 17:12:29 by ghilbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libwtf.a

BIN_PATH	= libs/
SRC_PATH	= ./
OBJ_PATH	= obj/
INC_PATH	= includes/
INCLUDES	= -I$(INC_PATH) -Ilibft/includes

SRC_NAME	=	wtf_ikea.c \
				wtf_putcolor.c \
				wtf_rainbow.c
				
HEADER 		=	$(INC_PATH)libwtf.h

CC			= gcc
CFLAGS		+= -Wall -Werror -Wextra

SRC			= $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJS 		= $(addprefix $(OBJ_PATH),$(subst .c,.o,$(SRC_NAME)))
BIN			= $(addprefix $(BIN_PATH),$(NAME))

.PHONY: all clean fclean re proper debug debugall libft out

all:	$(NAME)

$(NAME): $(BIN)

$(BIN): libft/libft.a $(OBJS) $(HEADER) | $(BIN_PATH)
		ar rc $(BIN) $(OBJS)
		ranlib $(BIN)


libft/libft.a:
	make -C libft

$(OBJS): | $(OBJ_PATH)

$(OBJ_PATH)%.o : %.c $(HEADER)
	$(CC) -c $(CFLAGS) $< -o $@ $(INCLUDES)

$(OBJ_PATH):
	@if [ ! -d "$(OBJ_PATH)" ]; then \
		mkdir $(OBJ_PATH);\
		fi

$(BIN_PATH):
	@if [ ! -d "$(BIN_PATH)" ]; then \
		mkdir $(BIN_PATH);\
		fi

clean:
	@make clean -C libft
	rm -rf $(OBJS)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf libft/libft.a
	rm -rf $(BIN_PATH)

proper: all clean

re:	fclean all

debug:
	CFLAGS="-g" make

debugall:
	CFLAGS="-g" make re

out:
	make
	$(CC) $(CFLAGS) main.c -Llibs -Llibft -lft -lwtf