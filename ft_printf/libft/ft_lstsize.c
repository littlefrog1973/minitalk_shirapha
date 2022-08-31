/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:09:36 by shirapra          #+#    #+#             */
/*   Updated: 2022/08/21 22:09:41 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	elements;

	if (lst == NULL)
		return (0);
	elements = 1;
	if (lst->next != 0)
		elements += ft_lstsize(lst->next);
	return (elements);
}
