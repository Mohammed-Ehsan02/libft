/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 11:03:09 by mkhan             #+#    #+#             */
/*   Updated: 2022/04/21 14:16:36 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int num)
{
	int	i;

	if (num < 0)
		i = 1;
	else
		i = 0;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int num)
{
	int			i;
	char		*s;
	int			len;
	long int	numb;

	numb = num;
	len = num_len(num);
	if (!num)
		return (ft_strdup ("0"));
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (0);
	i = len;
	s[i--] = '\0';
	if (numb < 0)
	{
		s[0] = '-';
		numb = -numb;
	}
	while (numb)
	{
		s[i--] = numb % 10 + '0';
		numb /= 10;
	}
	return (s);
}

// int main ()
// {
// 	printf("%s\n", ft_itoa(-21232LL));
// 	return(0);
// }/**/