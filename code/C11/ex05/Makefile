CC = gcc
FLAGS = -Wall -Wextra -Werror
DEPS = includes
OBJDIR = srcs

TARGET =  ft_atoi.o ft_ops.o ft_util.o do_op.o
OBJS = ${addprefix $(OBJDIR)/, $(TARGET)}
NAME = do-op

%.o : %.c 
	$(CC) $(FLAGS) -c $< -o $@ -I $(DEPS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJS)
	$(CC) $(FLAGS) main.c -o $(NAME) $(OBJS) -I $(DEPS)
	