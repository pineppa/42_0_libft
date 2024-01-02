
ROOT_DIR = $(shell pwd)

SRC_FILES = $(wildcard ft_*.c)

#BONUS = $(addprefix $(ROOT_DIR)/bonus/, $(SRC_FILES))

SRCS = $(addprefix $(ROOT_DIR)/, $(SRC_FILES))

O_FILES = $(SRCS:.c=.o)

#O_BONUS = $(BONUS:.c=.o)

NAME = libft.a

C_FLAGS = -Wall -Wextra -Werror 

OUT_DIR = $(ROOT_DIR)

all : $(NAME)

.c.o:
	gcc ${C_FLAGS} -c -I ${ROOT_DIR} $< -o ${<:.c=.o}

$(NAME) : $(O_FILES)
	ar -cr $(NAME) $(O_FILES)
	ranlib $(NAME)

clean :
	rm -f $(O_FILES)

fclean : clean
	rm -f $(NAME)
	
re : fclean all

bonus : $(O_FILES) #$(O_BONUS) 
	ar -cr $(NAME) $(O_FILES)
	ranlib $(NAME)

.PHONY: all clean fclean re
