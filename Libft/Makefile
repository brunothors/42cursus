# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bnespoli <bnespoli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 19:36:32 by bnespoli          #+#    #+#              #
#    Updated: 2023/10/18 19:40:42 by bnespoli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c\
 ft_isdigit.c\
 ft_isalnum.c\
 ft_isascii.c\
 ft_isprint.c\
 ft_strlen.c\
 ft_memset.c\
 ft_bzero.c\
 ft_memcpy.c\
 ft_memmove.c
OBJS = ${SRCS:.c=.o}
AR = ar rc
RM = rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all