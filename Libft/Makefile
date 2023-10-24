# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bnespoli <bnespoli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 19:36:32 by bnespoli          #+#    #+#              #
#    Updated: 2023/10/24 17:52:24 by bnespoli         ###   ########.fr        #
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
 ft_memmove.c\
 ft_strlcpy.c\
 ft_strlcat.c\
 ft_toupper.c\
 ft_tolower.c\
 ft_strchr.c\
 ft_strrchr.c\
 ft_strncmp.c\
 ft_memchr.c\
 ft_memcmp.c\
 ft_strnstr.c\
 ft_atoi.c\
 ft_calloc.c\
 ft_strdup.c
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