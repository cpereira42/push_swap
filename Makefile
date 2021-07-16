# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/27 00:08:05 by cpereira          #+#    #+#              #
#    Updated: 2021/07/15 18:57:39 by cpereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

HEADER_DIR =	includes/

SDIR =	./srcs/
ODIR =	./objs/

LIBFT_DIR =		libft
LIBFT =			$(LIBFT_DIR)/libft.a

SRCS =	$(SDIR)main.c \
		$(SDIR)extra.c \
		$(SDIR)extra2.c \
		$(SDIR)command_r.c \
		$(SDIR)verify_args.c \
		$(SDIR)prints.c \
		$(SDIR)command_s.c

OBJS =	$(patsubst $(SDIR)%.c, $(ODIR)%.o, $(SRCS))

CC = clang
HEADERS = -I./$(HEADER_DIR) -I./$(LIBFT_DIR)
C_FLAGS = -Wall -Werror -Wextra -g
C_SANIT = -fsanitize=address
L_FLAGS =  -L ./libft -lft -lncurses


$(NAME):	$(OBJS) $(LIBFT)
	$(CC) $(OBJS) $(C_FLAGS) $(C_SANIT) $(HEADERS) $(L_FLAGS) -o $@
	echo CONCLUIDO


$(ODIR)%.o: $(SDIR)%.c
		mkdir -p $(ODIR)
		$(CC) $(C_FLAGS) $(HEADERS) -c $< -o $@


all: push_swap

clean:
	rm -rf $(ODIR)
	#rm -f $(OBJS)
	#rmdir $(ODIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
