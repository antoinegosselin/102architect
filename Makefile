##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Main project's Makefile
##

NAME	=	102architect
LIB_NAME	=	my
SRC_NAME	=	src
INCL_NAME	=	include
TESTS_NAME	=	tests
UNIT_NAME	=	unit_test

ROOT_PATH	=	./
LIB_PATH	=	./lib/my
INCL_PATH	=	$(ROOT_PATH)$(INCL_NAME)
TESTS_PATH	=	$(ROOT_PATH)$(TESTS_NAME)

SRC_PATH	=	$(ROOT_PATH)$(SRC_NAME)

SRC	=	$(SRC_PATH)/architect_globals.c \
		$(SRC_PATH)/architect.c \
		$(SRC_PATH)/do_mul.c \
		$(SRC_PATH)/do_reflection.c \
		$(SRC_PATH)/do_rotation.c \
		$(SRC_PATH)/do_scaling.c \
		$(SRC_PATH)/do_translation.c \
		$(SRC_PATH)/free_float_array.c \
		$(SRC_PATH)/init_matrix.c \
		$(SRC_PATH)/init_point.c \
		$(SRC_PATH)/main.c \
		$(SRC_PATH)/print_matrix.c \
		$(SRC_PATH)/print_usage.c \
		$(SRC_PATH)/safe_malloc.c \
		$(SRC_PATH)/print_actions.c

SRC_TEST_1	=	$(TESTS_PATH)/test_pattern.c

CFLAGS	=	-Wall \
			-W \
			-I $(INCL_PATH) \
			-L$(LIB_PATH) -l$(LIB_NAME) \
			-lm

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	make -C $(LIB_PATH)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@make clean -C $(LIB_PATH) -s
	@$(RM) $(OBJ)
	@$(RM) *.gc*
	@$(RM) vgcore.*

fclean:	clean
	@make fclean -C $(LIB_PATH) -s
	@$(RM) $(NAME)
	@$(RM) a.out
	@$(RM) unit_test*

re:		fclean all

tests_run: 
	gcc -lcriterion -o $(UNIT_NAME)1 $(SRC_TEST_1) -L$(LIB_PATH) -l$(LIB_NAME) $(CFLAGS)
	./$(UNIT_NAME)1