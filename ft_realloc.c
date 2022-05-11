/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:37:56 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/05/04 18:36:59 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_realloc expand the size of the memory allocated to the pointer p
   @param p the pointer to expand
   @param size the new size of the memory
   @return the new pointer to the memory
*/
    
void    *ft_realloc(void *p, size_t size)
{
    void    *new;
    
    exitIF(!p, "p cannot be NULL");
    exitIF(!size, "size cannot be 0");
    new = malloc(size);
    exitIF(!new, "allocation failed");
    ft_memcpy(new, p, size);
    free(p);
    return (new);
}
