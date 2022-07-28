SRCS	=	filter_atoi.c filter_comma.c read.c main.c atol.c

OBJS	= ${SRCS:.c=.o}

CC	=	gcc
RM	=	rm -f

NAME = rush-02

CFLAGS = -Wall -Wextra -Werror -c

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
