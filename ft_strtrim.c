/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:53:55 by mkhan             #+#    #+#             */
/*   Updated: 2022/01/02 10:49:16 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, const char *set)
{
	char	*str;
	int		strlen;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
		i++;
	}
	if (*s1 == '\0')
		return (ft_strdup(""));
	strlen = ft_strlen(s1);
	while (ft_strchr(set, s1[strlen]))
		strlen--;
	str = (char *)ft_substr(s1, 0, strlen + 1);
	s1 -= i;
	return (str);
}
