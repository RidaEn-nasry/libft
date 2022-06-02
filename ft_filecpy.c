/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filecpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:23:49 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/02 15:01:52 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  copy a file
 * @note   if the filecpy is not found it's created and the content is copied
 * if it's is found it's overwritten.
 * @param  *filepath: the path of the file to copy
 * @param  *filecpy: the name of the file to copy to
 * @retval 0 on success, 1 on error
 */

int	ft_filecpy(char *filepath, char *filecpy)
{
	int		fd;
	int		fd2;
	char	buf;

	fd = open(filepath, O_RDONLY);
	if (fd == -1)
		return (1);
	fd2 = open(filecpy, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd2 == -1)
		return (1);
	while (read(fd, &buf, 1))
		write(fd2, &buf, 1);
	close(fd);
	close(fd2);
	return (0);
}
