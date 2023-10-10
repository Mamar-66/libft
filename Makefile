SRC		= ${wildcard *.c}

SRCS	= ${addprefix ,${SRC}}

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

RM		= rm

GCC		= gcc

FLAGS	= -Wall -Wextra -Werror

all:	${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

clean: 
		rm -f ${OBJS}

fclean: clean	
		rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
