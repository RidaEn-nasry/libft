/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:00:28 by ren-nasr          #+#    #+#             */
/*   Updated: 2021/11/15 17:01:26 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strrchr() function is identical to strchr(),
** except it locates the last occurrence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) + 1;
	while (len > 0)
	{
		if (s[len - 1] == c)
			return ((char *)&s[len - 1]);
		len = len - 1;
	}
	return (NULL);
}
