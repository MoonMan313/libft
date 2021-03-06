# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdionna <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 20:16:07 by cdionna           #+#    #+#              #
#    Updated: 2020/11/08 20:25:51 by cdionna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

SOURCE = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c\
ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c\
ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c\
ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

O_FILE = $(SOURCE:.c=.o)

O_BONUS = $(BONUS_SRCS:.c=.o)

C_FLAGS = -Wall -Wextra -Werror

.PHONY : all bonus clean fclean re

all: $(NAME)

$(NAME): $(HEADER) $(O_FILE)
	ar rc $(NAME) $(O_FILE)
	ranlib $(NAME)

$(O_FILE): %.o:%.c $(HEADER)
	gcc -c $(C_FLAGS) $<

bonus: $(O_BONUS) $(O_FILE) $(HEADER)
	ar rc $(NAME) $(O_BONUS) $(O_FILE)
	ranlib $(NAME)

$(O_BONUS): %.o:%.c $(HEADER)
	gcc -c $(C_FLAGS) $<

clean:
	rm -rf $(O_FILE)
	rm -rf $(O_BONUS)

fclean: clean
	rm -rf $(NAME)

re:		fclean all
	
