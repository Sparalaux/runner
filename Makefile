##
## RUNNER PROJECT, 23/05/2022 by deleta_t and bernar_a
## File description:
##      makefile
##

NAME = 	runner

SRC	=	source/main.c\
		source/draw.c\
		source/init.c\
		source/input.c\
		source/entity.c\
		source/random.c\
		source/movement.c

CC = 	gcc

OBJ = 	$(SRC:.c=.o)

CFLAGS += 	#-Wall -Wextra -Werror
CFLAGS += 	-I./include

LIBS += 	-lSDL2 -lSDL2_image

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LIBS)

all: $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean