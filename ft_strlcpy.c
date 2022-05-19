/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 10:49:00 by mkhan             #+#    #+#             */
/*   Updated: 2022/05/11 18:22:47 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;

	count = 0;
	if (!(dstsize))
		return (ft_strlen(src));
	while (*src && dstsize - 1)
	{
		*dst = *src;
		count++;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	src = src - count;
	dst = dst - count;
	return (ft_strlen(src));
}
