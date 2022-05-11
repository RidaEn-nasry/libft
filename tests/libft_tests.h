/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:15:27 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/05/10 14:11:56 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_TESTS_H
# define LIBFT_TESTS_H

#include "../libft.h"
#include <check.h>


// suites linked list


typedef struct s_suites
{
    char *name;
    Suite *(*suite)();
    struct s_suites *next;
} t_suites;


// suites prototypes
Suite *ft_doubreallo_suite(void);


#endif 