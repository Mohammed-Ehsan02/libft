/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:03:29 by mkhan             #+#    #+#             */
/*   Updated: 2022/05/05 16:39:06 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// void del(void *content)
// {
// 	free(content);
// }
// int main()
// {
// 	t_list *full;
// 	char *s;
// 	s = malloc(sizeof(char) * 8);
// 	s[0] = 'h';
// 	s[1] = 'i';
// 	s[2] = '\0';
// 	full = (t_list *)malloc(sizeof(t_list));
// 	full->content = (void *)s;
// 	printf("%s\n", (char *)full->content);
// 	ft_lstdelone(full, del);
// 	printf("%s", (char *)full->content);
// }
