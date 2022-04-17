/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:33:30 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/04/16 18:23:53 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Convert int into a string */

size_t				get_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char* ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char* result;

	len = get_len(n);
	if (!(result = (char*)malloc(len + 1)))
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (len-- > i)
		if (n < 0)
		{
			result[len] = '0' + n % 10 * (-1);
			n = n / 10;
		}
		else
		{
			result[len] = '0' + n % 10;
			n = n / 10;
		}
	return (result);
}