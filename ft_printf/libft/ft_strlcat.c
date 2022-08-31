/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:17:18 by shirapra          #+#    #+#             */
/*   Updated: 2022/08/21 22:17:20 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + ft_strlen(src));
	while (i + 1 < dstsize)
	{
		if (src[i - dst_len] == '\0')
			break ;
		dst[i] = src[i - dst_len];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + dst_len);
}
