/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:37:56 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/04/25 11:19:56 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_realloc(void *ptr, size_t size)
{
    void    *new;

    if (!(new = malloc(size)))
        return (NULL);
    if (ptr)
    {
        ft_memcpy(new, ptr, ft_strlen((char *)ptr));
        free(ptr);
    }
    return (new);
}
