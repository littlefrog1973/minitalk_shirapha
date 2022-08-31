/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:45:36 by shirapra          #+#    #+#             */
/*   Updated: 2022/08/24 01:59:17 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_binary_to_ascii(char *s)
{
	int				pow;
	unsigned char	c;
	size_t			i;

	pow = 1;
	c = 0;
	i = ft_strlen(s) - 1;
	while (i + 1 != 0)
	{
		c += pow * (s[i] - '0');
		pow *= 2;
		i--;
	}
	write(1, &c, 1);
}

static void	ft_readbit_confirm_tochar(int sig)
{
	static char	*bits;
	static int	bit_count;

	bit_count++;
	if (bits == NULL)
	{
		bits = ft_strdup("");
		bit_count = 1;
	}
	if (sig == SIGUSR2)
		bits = ft_append_char(bits, '0');
	else
		bits = ft_append_char(bits, '1');
	if (bit_count == 8)
	{
		ft_binary_to_ascii(bits);
		free(bits);
		bits = NULL;
	}
}

int	main(void)
{
	ft_printf("Server PID %u\n", getpid());
	while (1)
	{
		signal(SIGUSR1, ft_readbit_confirm_tochar);
		signal(SIGUSR2, ft_readbit_confirm_tochar);
		pause();
	}
	return (0);
}
