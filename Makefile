# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/26 15:07:48 by rde-oliv          #+#    #+#              #
#    Updated: 2020/06/12 03:59:26 by rde-oliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRC		= ft_strmapi.c ft_split.c ft_itoa.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_strnstr.c ft_memcmp.c ft_strrchr.c ft_strchr.c ft_strlcat.c ft_memchr.c ft_memmove.c ft_memccpy.c ft_memcpy.c ft_memset.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c
B_SRC	= ft_lstmap.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c ft_lstnew.c 
OBJS	= $(SRC:.c=.o)
B_OBJS	= $(B_SRC:.c=.o)
CCFLAGS	= -Wall -Wextra -Werror
CC = clang

all: $(NAME)

$(NAME):
	$(CC) $(CCFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBJS)

bonus:
	$(CC) $(CCFLAGS) -c $(B_SRC)
	ar -rcs $(NAME) $(B_OBJS)

clean:
	rm -f $(OBJS)
	rm -f $(B_OBJS)

fclean:	clean
	rm -f $(NAME)

re:		fclean all
