
ROOT_DIR = $(shell pwd)

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
#ft_strnstr.c
SRCS_B	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRC_FILES = $(addprefix $(ROOT_DIR)/, $(SRCS))

SRC_BONUS = $(addprefix $(ROOT_DIR)/, $(SRCS_B))

O_FILES = $(SRC_FILES:.c=.o)

O_BONUS = $(SRC_BONUS:.c=.o)

NAME = libft.a

C_FLAGS = -Wall -Wextra -Werror 

OUT_DIR = $(ROOT_DIR)

all : $(NAME)

.c.o:
	gcc ${C_FLAGS} -c -I ${ROOT_DIR} $< -o ${<:.c=.o}

$(NAME) : $(O_FILES)
	ar -cr $(NAME) $(O_FILES)

clean :
	rm -f $(O_FILES) $(O_BONUS)

fclean : clean
	rm -f $(NAME)
	
re : fclean all

bonus : $(NAME) $(O_BONUS) 
	ar -cr $(NAME) $(O_BONUS)

.PHONY: all bonus clean fclean re
