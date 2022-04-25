/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:25:49 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/04/25 11:28:02 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_doublen.c  count length of double pointers char **
 * it returns the length of the double pointer array
 *  or 0 if the pointer is NULL
*/

#include "libft.h"

size_t  ft_doublen(char **str)
{
    size_t  i;

    i = 0;
    if (!str)
        return (0);
    while (str[i])
        i++;
    return (i);
}
