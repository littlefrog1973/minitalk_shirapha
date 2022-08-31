/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:08:01 by shirapra          #+#    #+#             */
/*   Updated: 2022/08/21 22:08:04 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*list;

	if (lst == NULL)
		return (NULL);
	list = lst;
	if (lst->next != 0)
		list = ft_lstlast(lst->next);
	return (list);
}
