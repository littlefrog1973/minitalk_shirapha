/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:44:41 by shirapra          #+#    #+#             */
/*   Updated: 2022/08/24 01:51:04 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static int	ft_get_size(unsigned int ln)
{
	int	size;

	size = 1;
	while (ln / 10 != 0)
	{
		size++;
		ln /= 10;
	}
	return (size);
}

char	*ft_uitoa(unsigned int n)
{
	char	*c;
	int		size;
	int		i;

	size = ft_get_size(n);
	c = malloc(size + 1);
	if (c == NULL)
		return (NULL);
	c[size] = '\0';
	if (n == 0)
		c[0] = '0';
	i = 1;
	while (i < size + 1 && n != 0)
	{
		c[size - i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	return (c);
}
