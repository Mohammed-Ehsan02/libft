/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:17:16 by mkhan             #+#    #+#             */
/*   Updated: 2022/05/05 16:40:45 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
// 	t_list *last;
// 	t_list *lsst;
// 	t_list *front;
// 	int a;
// 	int b;
// 	int *x;
// 	int *y;
// 	int *z;
// 	a = 10; 
// 	b = 12;
// 	x = &a;
// 	y = &b;
// 	last = (t_list *)malloc(sizeof(t_list));
// 	lsst = (t_list *)malloc(sizeof(t_list));
// 	front = (t_list *)malloc(sizeof(t_list));
// 	last->content = (void*)x;
// 	lsst->content = (void*)y;
// 	last->next = lsst;
// 	lsst->next = NULL;
// 	front = ft_lstlast(last);
// 	front->next = NULL;
// 	z = (int *)front->content;
// 	printf("%d\n", *z);
// }