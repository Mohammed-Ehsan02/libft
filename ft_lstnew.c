/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:47:39 by mkhan             #+#    #+#             */
/*   Updated: 2022/05/05 16:44:17 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->content = content;
	return (new);
}

// int main ()
// {
// 	int a;
// 	int *b;
// 	t_list *old;
// 	a = 10;
// 	old = ft_lstnew((void*)&a);
// 	b = (int *)old->content;
// 	printf("%d\n", *b);
// 	printf("%d", *(int *)old->content);
// } 
