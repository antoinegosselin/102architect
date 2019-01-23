##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Compiles the libmy.a library binary
##

ECHO	=	/bin/echo -e
DEFAULT	=	"\e[0m"
DIM_T	=	"\e[2m"
BOLD_T	=	"\e[1m"
UNDLN_T	=	"\e[4m"
GREEN_C	=	"\e[32m"
RED_C	=	"\e[31m"
MAGEN_C	=	"\e[35m"
DEFAULT_C	=	"\e[39m"
LIGHT_RED	=	"\e[91m"
LIGHT_GREEN	=	"\e[92m"
WIERD_GREEN	=	"\e[38;5;10m"

NAME	=	my
MY_PATH	=	./my
PRINTF_PATH	=	./printf
INCLUDE_PATH	=	./include

LINE_RETURN	=	$(ECHO) ""

SRC_MY	=	$(MY_PATH)/my_arraylen.c \
			$(MY_PATH)/my_char_isalphanum.c \
			$(MY_PATH)/my_char_isin.c \
			$(MY_PATH)/my_char_islower.c \
			$(MY_PATH)/my_char_isnum.c \
			$(MY_PATH)/my_char_isprintable.c \
			$(MY_PATH)/my_char_isupper.c \
			$(MY_PATH)/my_dputchar.c \
			$(MY_PATH)/my_dputstr.c \
			$(MY_PATH)/my_fputchar.c \
			$(MY_PATH)/my_fputstr.c \
			$(MY_PATH)/my_free_fields.c \
			$(MY_PATH)/my_getnbr.c \
			$(MY_PATH)/my_isneg.c \
			$(MY_PATH)/my_put_nbr.c \
			$(MY_PATH)/my_putchar_err.c \
			$(MY_PATH)/my_putchar.c \
			$(MY_PATH)/my_putstr_err.c \
			$(MY_PATH)/my_putstr.c \
			$(MY_PATH)/my_revstr.c \
			$(MY_PATH)/my_show_word_array.c \
			$(MY_PATH)/my_showmem.c \
			$(MY_PATH)/my_showstr.c \
			$(MY_PATH)/my_sort_int_array.c \
			$(MY_PATH)/my_str_addchar.c \
			$(MY_PATH)/my_str_capitalize.c \
			$(MY_PATH)/my_str_isalpha.c \
			$(MY_PATH)/my_str_islower.c \
			$(MY_PATH)/my_str_isnum.c \
			$(MY_PATH)/my_str_isprintable.c \
			$(MY_PATH)/my_str_isupper.c \
			$(MY_PATH)/my_str_to_word_array.c \
			$(MY_PATH)/my_stralloc.c \
			$(MY_PATH)/my_strcat.c \
			$(MY_PATH)/my_strcmp.c \
			$(MY_PATH)/my_strcpy.c \
			$(MY_PATH)/my_strcpycat.c \
			$(MY_PATH)/my_strdup.c \
			$(MY_PATH)/my_strlen.c \
			$(MY_PATH)/my_strlowcase.c \
			$(MY_PATH)/my_strncat.c \
			$(MY_PATH)/my_strncmp.c \
			$(MY_PATH)/my_strncpy.c \
			$(MY_PATH)/my_strncpycat.c \
			$(MY_PATH)/my_strndup.c \
			$(MY_PATH)/my_strstr.c \
			$(MY_PATH)/my_strupcase.c \
			$(MY_PATH)/my_swap.c

SRC_PRINTF	=	$(PRINTF_PATH)/my_dprintf.c \
				$(PRINTF_PATH)/my_fprintf.c \
				$(PRINTF_PATH)/my_printf_display.c \
				$(PRINTF_PATH)/my_printf_fieldwidth.c \
				$(PRINTF_PATH)/my_printf_flags.c \
				$(PRINTF_PATH)/my_printf_globals.c \
				$(PRINTF_PATH)/my_printf_precision.c \
				$(PRINTF_PATH)/my_printf_put_nbr.c \
				$(PRINTF_PATH)/my_printf_putnbr_base.c \
				$(PRINTF_PATH)/my_printf_showstr.c \
				$(PRINTF_PATH)/my_printf_str_to_word_array.c \
				$(PRINTF_PATH)/my_printf_zeropadding.c \
				$(PRINTF_PATH)/my_printf.c \
				$(PRINTF_PATH)/my_sprintf.c \
				$(PRINTF_PATH)/my_vdprintf.c \
				$(PRINTF_PATH)/my_vfprintf.c \
				$(PRINTF_PATH)/my_vprintf.c \
				$(PRINTF_PATH)/my_vsprintf.c

SRCS	=	$(SRC_MY) \
			$(SRC_PRINTF)

CFLAGS	=	-Wall \
			-W \
			-Werror \
			-I $(INCLUDE_PATH)

OBJ	=	$(SRCS:.c=.o)

all:	message $(NAME)

$(NAME):	$(OBJ)
	@ar rc ./lib$(NAME).a $(OBJ) && \
	$(ECHO) $(GREEN_C)"\nCOMPILED:" $(LIGHT_GREEN) "lib$(NAME).a\n" $(DEFAULT) || \
	$(ECHO) $(RED_C)$(UNDLN_T)$(BOLD_T)"BUILD FAILED:" $(LIGHT_RED) "lib$(NAME).a"$(DEFAULT)"\n"

message:
	@$(LINE_RETURN)
	@$(ECHO) $(GREEN_C)"BUILDING:" $(LIGHT_GREEN) "lib$(NAME).a" $(DEFAULT)
	@$(LINE_RETURN)

clean:
	@$(LINE_RETURN)
	@$(RM) $(OBJ)
	@$(ECHO) $(RED_C)"DELETED:" $(LIGHT_RED) "Object files" $(DEFAULT)

fclean:	clean
	@$(RM) ./lib$(NAME).a
	@$(ECHO) $(RED_C)"DELETED:" $(LIGHT_RED) "Binary lib$(NAME).a" $(DEFAULT)
	@$(LINE_RETURN)

%.o: %.c
	@$(CC) -c $(CFLAGS) -o $@ $< && \
	$(ECHO) $(DIM_T) "cc $(CFLAGS) -c -o " $@ $< $(DEFAULT) || \
	$(ECHO) "\n"$(MAGEN_C) $(UNDLN_T)$(BOLD_T)"cc $(CFLAGS) -c -o " $@ $<$(DEFAULT)"\n"

re:		fclean all