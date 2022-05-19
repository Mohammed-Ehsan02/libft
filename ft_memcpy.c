/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:06:31 by mkhan             #+#    #+#             */
/*   Updated: 2021/12/27 13:07:09 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) dst;
	b = (unsigned char *) src;
	if (dst == src)
		return (dst);
	while (n > 0)
	{
		*a = *b;
		a++;
		b++;
		n--;
	}
	return (dst);
}
