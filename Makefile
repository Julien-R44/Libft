NAME=libft.a
FLAGS=-Wall -Wextra -Werror
FILES_C=ft_putstr.c \
		ft_putendl.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memset.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strcat.c \
		ft_strstr.c \
		ft_strcmp.c \
		ft_atoi.c \
		ft_memalloc.c
FILES_O=ft_putstr.o \
		ft_putendl.o \
		ft_putchar.o \
		ft_putnbr.o \
		ft_putchar_fd.o \
		ft_putstr_fd.o \
		ft_putendl_fd.o \
		ft_putnbr_fd.o \
		ft_bzero.o \
		ft_memcpy.o \
		ft_memccpy.o \
		ft_memset.o \
		ft_isalnum.o \
		ft_isalpha.o \
		ft_isascii.o \
		ft_isdigit.o \
		ft_isprint.o \
		ft_tolower.o \
		ft_toupper.o \
		ft_strlen.o \
		ft_strdup.o \
		ft_strcpy.o \
		ft_strcat.o \
		ft_strstr.o \
		ft_strcmp.o \
		ft_atoi.o \
		ft_memalloc.o

all: clean libft

libft:
	gcc $(FLAGS) -c $(FILES_C)
	ar rc $(NAME) $(FILES_O)
	ranlib $(NAME)

cleanO: 
	rm -f $(FILES_O)

clean:
	rm -f $(FILES_O)
	rm -f $(NAME)