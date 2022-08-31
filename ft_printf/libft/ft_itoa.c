/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:05:04 by shirapra          #+#    #+#             */
/*   Updated: 2022/08/21 22:05:08 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_get_size(long *ln)
{
	int	size;
	int	i;

	size = 1;
	i = *ln;
	while (i / 10 != 0)
	{
		size++;
		i /= 10;
	}
	if (*ln < 0)
	{
		*ln *= -1;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		size;
	int		i;
	long	ln;

	ln = n;
	size = ft_get_size(&ln);
	c = malloc(size + 1);
	if (c == NULL)
		return (NULL);
	c[size] = '\0';
	c[0] = '-';
	if (n == 0)
		c[0] = '0';
	i = 1;
	while (i < size + 1 && ln != 0)
	{
		c[size - i] = (ln % 10) + '0';
		ln /= 10;
		i++;
	}
	return (c);
}
