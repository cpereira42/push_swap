# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/27 00:08:05 by cpereira          #+#    #+#              #
#    Updated: 2021/07/24 09:21:36 by cpereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

HEADER_DIR =	includes/

SDIR =	./srcs/
ODIR =	./objs/

LIBFT_DIR =		./Libft/
#LIBFT =			$(LIBFT_DIR)/libft.a

SRCS =	$(SDIR)main.c \
		$(SDIR)extra.c \
		$(SDIR)extra2.c \
		$(SDIR)command_r.c \
		$(SDIR)verify_args.c \
		$(SDIR)prints.c \
		$(SDIR)sort.c \
		$(SDIR)initialize.c \
		$(SDIR)command_a.c \
		$(SDIR)command_b.c \
		$(LIBFT_DIR)ft_strdup.c \
		$(LIBFT_DIR)ft_putstr_fd.c \
		$(LIBFT_DIR)ft_putnbr_fd.c \
		$(LIBFT_DIR)ft_putchar_fd.c \
		$(LIBFT_DIR)ft_bzero.c \
		$(LIBFT_DIR)ft_strlen.c \
		$(LIBFT_DIR)ft_isdigit.c \
		$(LIBFT_DIR)ft_atoi.c

OBJS =	$(patsubst $(SDIR)%.c, $(ODIR)%.o, $(SRCS))

CC = clang
HEADERS = -I./$(HEADER_DIR) -I./$(LIBFT_DIR)
C_FLAGS = -Wall -Werror -Wextra -g
C_SANIT = -fsanitize=address
L_FLAGS =  -L ./libft -lncurses


$(NAME):	$(OBJS) $(LIBFT)
	$(CC) $(OBJS) $(C_FLAGS) $(C_SANIT) $(HEADERS) $(L_FLAGS) -o $@
	echo FINALIZADO

$(LIBFT):
	#make re -C ./libft


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
