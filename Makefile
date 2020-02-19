CC = gcc -Wall -Wextra -Werror
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	  ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c
OBJ = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o \
	  ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
$(OBJ): 
	$(CC) -c $(SRCS) 

clean:
	rm -f  *.a 

fclean: clean
	rm -f *.o

re: fclean all


