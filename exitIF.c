/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exitIF.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:55:54 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/04/21 21:58:25 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* exitIF.c implementation :
	- exit with error message if condition is true	
	- return 0 if condition is false
*/

#include "libft.h"

int	exitIF(int condition, char *message)
{
	if (condition)
	{
		ft_putendl_fd(message, 2);
		return(EXIT_FAILURE);
	}
	return (0);
}