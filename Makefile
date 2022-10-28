# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atiampae <atiampae@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 16:28:11 by atiampae          #+#    #+#              #
#    Updated: 2022/10/28 21:01:39 by atiampae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					= libft.a

SRCS                    = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_memset.c ft_bzero.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memcpy.c ft_strjoin.c ft_memmove.c ft_atoi.c ft_memchr.c ft_strlcpy.c ft_strmapi.c ft_striteri.c ft_substr.c ft_strtrim.c ft_strncmp.c ft_memcmp.c ft_strdup.c ft_strnstr.c ft_strlcat.c ft_itoa.c 
#BNS_SRCS                =#

OBJS					= $(SRCS:%.c=%.o)

#BNS_OBJS				= $(BNS_SRCS:%#

FLAGS					= -Wall -Wextra -Werror

$(NAME)		:	$(OBJS)
			gcc $(FLAGS) -c $(SRCS) -I./
			ar rc $(NAME) $(OBJS)

all	:	$(NAME)

bonus	:	$(NAME)
		gcc $(FLAGS) -c $(BNS_SRCS) -I./
		ar rc $(NAME) $(BNS_OBJS)

clean	:
		rm -f $(OBJS) $(BNS_OBJS)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
