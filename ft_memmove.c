/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:15:20 by mkhan             #+#    #+#             */
/*   Updated: 2022/05/11 12:02:29 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*k;
	unsigned const char	*m;
	int					diff;
	int					length;

	diff = src - dst;
	length = (int)len;
	if (dst == src)
		return (dst);
	if (diff < length && diff > 0)
		return (ft_memcpy(dst, src, len));
	else
	{
		k = dst + len - 1;
		m = src + len - 1;
		while (len)
		{
			*k-- = *m--;
			len--;
		}
		k++;
		m++;
	}
	return (k);
}
