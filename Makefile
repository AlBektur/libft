
#No esta acabado!!!!

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

SRCS = 


OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
$(AR) $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c
$(CC) $(CFLAGS) -c $< -o $@

clean:
$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
