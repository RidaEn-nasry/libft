/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:59:18 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/05/13 15:03:24 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    @description:   
        - this function returns the value of the environment variable
        - if the variable is not found, it returns NULL
    @param:
        - char *name: the name of the variable
    @return:
        - char *: the value of the variable
*/

#include "libft.h"

char    *ft_getenv(char **env, char *name)
{
    size_t  i;

    i = 0;
    while (env[i])
    {
        if (ft_strncmp(env[i], name, ft_strlen(name)) == 0)
            return (env[i] + ft_strlen(name) + 1);
        i++;
    }
    return (NULL);
}