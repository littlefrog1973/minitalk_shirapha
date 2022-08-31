# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shirapra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 21:42:37 by shirapra          #+#    #+#              #
#    Updated: 2022/08/24 01:41:49 by shirapra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = "libftprintf.a"

FILES = ft_hexitoa.c	ft_printf.c	ft_uitoa.c

OBJECTS = ft_hexitoa.o	ft_printf.o	ft_uitoa.o

all:
	@gcc -c -Wall -Wextra -Werror $(FILES)
	@cd libft && make all
	@ar rcs $(NAME) $(OBJECTS) libft/*.o
	
clean:
	@rm -f $(OBJECTS)
	@cd libft && make clean

fclean: clean
	@rm -f $(NAME)
	@cd libft && make fclean

re: fclean all
