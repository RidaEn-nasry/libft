/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:09:59 by ren-nasr          #+#    #+#             */
/*   Updated: 2021/11/15 16:10:42 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** The strchr() function locates the first occurrence of c
** (converted to a char) in teh string pointed to by s.
** The terminating null character is considered to be part of the string;
** therefore if c is `\0', the functions locate the terminating `\0'.
*/

char	*ft_strchr(const char *s, int c)
{
	return ((char *)ft_memchr(s, c, ft_strlen(s) + 1));
}
