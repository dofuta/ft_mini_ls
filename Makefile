NAME	= ft_mini_ls
SDIR	= srcs/
FILES	= ft_mini_ls.c ft_bzero.c ft_calloc.c ft_memset.c\
				ft_put_list.c ft_sort_list.c ft_strdup.c ft_strlen.c
SOURCES = $(addprefix $(SDIR), $(FILES))
OBJECTS = ${SOURCES:.c=.o}
RM		= rm -rf
CC		= gcc
INCLUDES= -I includes
CFLAGS	= -Wall -Wextra -Werror $(INCLUDES)


all : $(NAME)

$(NAME) : $(SOURCES)
	$(CC) $(SOURCES) $(INCLUDES) -o $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean:
	$(RM) $(OBJECTS) $(NAME)

re: fclean all

.PHONY:
	all clean fclean re
