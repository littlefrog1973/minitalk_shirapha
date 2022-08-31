# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shirapra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 21:45:34 by shirapra          #+#    #+#              #
#    Updated: 2022/08/21 21:45:37 by shirapra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = "libft.a"

all:
	@gcc -c -Wall -Wextra -Werror ft_[!l]*.c
	@ar rcs libft.a *.o
	
clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: fclean
	@gcc -c -Wall -Wextra -Werror *.c
	@ar rcs libft.a *.o
