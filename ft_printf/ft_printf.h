/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:44:16 by shirapra          #+#    #+#             */
/*   Updated: 2022/08/24 01:49:19 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

char	*ft_uitoa(unsigned int n);
char	*ft_hexitoa(unsigned long n, char cha);
int		ft_printf(const char *s, ...);

#endif
