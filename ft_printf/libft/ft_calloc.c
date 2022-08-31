/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:48:24 by shirapra          #+#    #+#             */
/*   Updated: 2022/08/21 22:04:24 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*c;
	int		len;

	len = count * size;
	c = malloc(len);
	if (c == NULL)
		return (NULL);
	while (len > 0)
	{
		c[len - 1] = 0;
		len--;
	}
	return (c);
}
