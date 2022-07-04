SRCS = ft_pipex.c ft_error.c ft_gtpath.c
NAME = pipex
OBJS = ${SRCS:.c=.o}
AR	 = ft_printf/libftprintf.a libft/libft.a
CC	 = gcc
GFLAGS = -Wall -Wextra -Werror
MAKEC = make clean
MAKEF = make fclean
MAKER = make re

all: $(NAME)

$(NAME):
		@$(NAME) -C libft
		@$(NAME) -C ft_printf
		@$(CC) $(CFLAGS) -c $(SRCS)
		@$(CC) -o {NAME} {AR} {OBJS}

clean:
		@$(MAKEC) -C libft
		@$(MAKEC) -C ft_printf
		@${RM} ${OBJS}

fclean: clean
		@$(MAKEF) -C libft
		@$(MAKEF) -C ft_printf
		@${RM} ${NAME}

re:	fclean all
		@$(MAKER) -C libft
		@$(MAKER) -C ft_printf

.PHONY: all clean fclean re