NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INCLUDE = inc/
OBJFOLDER = obj/
FOLDER = srcs/
SRCS = \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

SRCSB = \
		ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c \

OBJS = $(SRCS:%.c=$(OBJFOLDER)%.o)
OBJSB = $(SRCSB:%.c=$(OBJFOLDER)%.o)

$(OBJFOLDER)%.o: $(FOLDER)%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	@ar -rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created." 

clean:
	@rm -rf $(OBJFOLDER)
	@echo "Object files cleaned."

bonus: $(OBJS) $(OBJSB)
	@ar -rcs $(NAME) $(OBJS) $(OBJSB)
	@echo "Library $(NAME) with bonus files created."

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) and object files cleaned."

re: fclean all

.PHONY: all clean fclean re

