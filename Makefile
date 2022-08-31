# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shirapra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 21:41:12 by shirapra          #+#    #+#              #
#    Updated: 2022/08/24 01:39:54 by shirapra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk

$(NAME): all

all:
	@cd ft_printf && make all
	@gcc -Wall -Wextra -Werror src/server.c ft_printf/libftprintf.a -o server
	@gcc -Wall -Wextra -Werror src/client.c ft_printf/libftprintf.a -o client

clean:
	@cd ft_printf && make clean
	@rm -f server
	@rm -f client

fclean: clean
	@cd ft_printf && make fclean

re: fclean all

bonus: fclean
	@cd ft_printf && make all
	@gcc -Wall -Wextra -Werror "src_bonus/server_bonus.c" ft_printf/libftprintf.a -o server
	@gcc -Wall -Wextra -Werror "src_bonus/client_bonus.c" ft_printf/libftprintf.a -o client
