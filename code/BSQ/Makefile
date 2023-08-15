# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 16:48:28 by ncarvalh          #+#    #+#              #
#    Updated: 2022/09/07 16:58:53 by ncarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
DEPS = includes
OBJDIR = srcs
EXEC = bsq

TARGET =  ft_bsq.o ft_file_parser_1.o ft_file_parser_2.o ft_helper_1.o ft_helper_2.o ft_integer.o ft_string_1.o ft_string_2.o
OBJS = ${addprefix $(OBJDIR)/, $(TARGET)}

%.o : %.c 
	$(CC) $(FLAGS) -c $< -o $@ -I $(DEPS)

all: $(OBJS)
	$(CC) $(FLAGS) main.c -o $(EXEC) $(OBJS)
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all


	