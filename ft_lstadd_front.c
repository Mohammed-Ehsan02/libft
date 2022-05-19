/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:13:49 by mkhan             #+#    #+#             */
/*   Updated: 2022/05/05 16:37:19 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
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
// 	printf("%d\n", *(int *)last->content);
// 	ft_lstadd_front(&last, front);
// 	printf("%d", *(int *)last->content);
// }