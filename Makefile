CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c 
OBJS = ${SRCS:c=o}
BONUSSRCS = ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c 
BONUSOBJS = ${BONUSSRCS:c=o}
NAME = libft.a

all: ${NAME}

bonus: ${BONUSOBJS}
	ar rcs ${NAME} ${BONUSOBJS}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o: %.c
	gcc ${CFLAGS} -c $<

clean:
	rm -f ${OBJS} ${BONUSOBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all