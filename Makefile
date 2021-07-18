
NAME =	libftprintf.a

FLAGS =	-Wall -Wextra -Werror
CC =	gcc

LIBFT_DIR	=	./libft
LIBFT		=	${LIBFT_DIR}/libft.a

SRCS =	ft_convert_base.c ft_print_char.c ft_print_integer.c \
		ft_print_width.c ft_printf.c ft_treatment_type.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@ar rcs $@ $^
	@echo "$(NAME) created"

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	@gcc $(FLAGS) -c $< -o $@
	@echo "$@ created from $<"

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "OBJECTS deleted"

fclean: clean
	make -C $(LIBFT_DIR) fclean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: fclean clean re all