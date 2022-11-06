NAME	=	radix

SRC		=	main.c list_functions.c

OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	cc $(OBJ) -o $(NAME)

PHONY: all