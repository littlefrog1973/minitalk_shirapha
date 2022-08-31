/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:06:35 by shirapra          #+#    #+#             */
/*   Updated: 2022/08/21 22:06:38 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*t;

	while (*lst != NULL)
	{
		t = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = t;
	}
	lst = NULL;
}
