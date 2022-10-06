NAME = libft.a

CC= gcc
CFLAGS= -Wall -Wextra -Werror -I.
RM= rm -rf

SRC =  ft_bzero.c\
		ft_isalnum.c\
        ft_isalpha.c\
        ft_isascii.c\
        ft_isdigit.c\
        ft_isprint.c\
        ft_memcpy.c\
        ft_memmove.c\
        ft_memset.c\
        ft_strchr.c\
        ft_strlcat.c\
        ft_strlcpy.c\
        ft_strlen.c\
		ft_strncmp.c\
        ft_strrchr.c\
        ft_tolower.c\
		ft_toupper.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_atoi.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
        
OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS) 
	ar crs $(NAME) $(OBJS)

SRC_BONUS =	ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\


BONUS_OBJS = $(SRC_BONUS:.c=.o)


all: $(NAME)

bonus:
	make SRC='$(SRC) $(SRC_BONUS)'

clean: 
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all re clean bonus rebonus fclean
