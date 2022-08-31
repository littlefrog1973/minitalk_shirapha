/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:11:52 by shirapra          #+#    #+#             */
/*   Updated: 2022/08/21 22:11:55 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*point;
	size_t	i;

	point = b;
	i = 0;
	while (i < len)
	{
		point[i] = c;
		i++;
	}
	return (point);
}
