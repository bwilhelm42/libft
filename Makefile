CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS =
OBJ = 
LIB = libft.a

all: $(LIB)

$(LIB): $(OBJ)
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rcs $(LIB) $(OBJ)

clean:
	rm -f  *.a 

fclean: clean
	rm -f *.o

re: fclean all


