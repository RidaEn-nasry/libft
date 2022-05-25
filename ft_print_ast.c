/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:55:57 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/05/25 12:04:26 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    @description:
        - print the ast
    @param:
        - t_AST *root: the root of the ast
    @return:
        - void
    @note:
        - the printing is recursive 
*/

#include "libft.h"

void    ft_print_ast(t_AST *root)
{
    if (!root)
        return ;
    ft_print_ast(root->left);
    ft_putendl_fd(root->sym, 0);
    ft_print_ast(root->right);
}
