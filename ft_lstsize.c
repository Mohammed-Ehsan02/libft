/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:42:55 by mkhan             #+#    #+#             */
/*   Updated: 2022/05/05 16:44:35 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_list *a;
// 	t_list *b;
// 	t_list *c;
// 	int i;
// 	int *x;

// 	i = 0;
// 	x = &i;
// 	a = ft_lstnew((void *)x);
// 	while (i < 10)
// 	{
// 		ft_lstadd_front(&a, ft_lstnew((void *)x));
// 		i++;
// 	}
// 	printf("%d", ft_lstsize(a));
// }