/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:45:14 by mkhan             #+#    #+#             */
/*   Updated: 2021/12/27 12:50:37 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	unsigned int	num;
	int				count_minus;

	num = 0;
	count_minus = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\f'
		|| *str == '\r' || *str == '\v' )
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			count_minus = -count_minus;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	if (num > 2147483648 && count_minus == -1)
		return (0);
	if (num > 2147483647 && count_minus == 1)
		return (-1);
	return (num * count_minus);
}
