/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:29:47 by mkhan             #+#    #+#             */
/*   Updated: 2022/05/05 16:38:11 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*first;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		first = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = first;
	}
	*lst = NULL;
}
