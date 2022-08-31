/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:10:09 by shirapra          #+#    #+#             */
/*   Updated: 2022/08/21 22:10:12 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*string;
	size_t		i;

	string = s;
	i = 0;
	while (i < n)
	{
		if (string[i] == c)
			return ((void *)&string[i]);
		i++;
	}
	return (NULL);
}
