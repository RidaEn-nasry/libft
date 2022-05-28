/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doubdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 09:34:53 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/05/28 09:40:18 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  duplicate a char **
 * @note   **doub is not freed
 * @param  **doub: the char ** to duplicate
 * @retval **: the duplicated char **
 */

char	**ft_doubdup(char **doub)
{
	size_t	i;
	char	**new_doub;

	if (!doub)
		return (NULL);
	new_doub = malloc(sizeof(char *) * ft_doublen((const char **)doub) + 1);
	i = 0;
	while (doub[i])
	{
		new_doub[i] = ft_strdup(doub[i]);
		i++;
	}
	new_doub[i] = NULL;
	return (new_doub);
}
