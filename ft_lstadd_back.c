/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:55:21 by mkhan             #+#    #+#             */
/*   Updated: 2022/05/05 16:36:13 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*first;

	if (lst == NULL)
		return ;
	if (*lst && lst)
	{
		first = *lst;
		while (first->next)
			first = first->next;
		first->next = new;
		return ;
	}
	else
		*lst = new;
}

// int main()
// {
// 	t_list *last;
// 	t_list *lsst;
// 	t_list *front;
// 	int a;
// 	int b;
// 	int c;
// 	int *x;
// 	int *y;
// 	int *z;
// 	a = 10;
// 	b = 12;
// 	c = 14;
// 	x = &a;
// 	y = &b;
// 	z = &c;
// 	last = (t_list *)malloc(sizeof(t_list));
// 	lsst = (t_list *)malloc(sizeof(t_list));
// 	front = (t_list *)malloc(sizeof(t_list));
// 	last->content = (void*)x;
// 	lsst->content = (void*)y;
// 	last->next = lsst;
// 	lsst->next = NULL;
// 	front->content = (void*)z;
// 	front->next = NULL;
// 	printf("%d\n", *(int *)ft_lstlast(last)->content);
// 	ft_lstadd_back(&last, front);
// 	printf("%d", *(int *)ft_lstlast(last)->content);
// }