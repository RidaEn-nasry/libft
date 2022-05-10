/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doubrealloc_tests.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:19:29 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/05/10 12:30:44 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft_tests.h"

START_TEST (test_ft_doubrealloc_1)
{
    void **ptr;

    ptr = NULL;
    ptr = ft_doubrealloc(ptr, 1);
    ck_assert_ptr_eq(ptr[0], NULL);

} END_TEST;


START_TEST (test_ft_doubrealloc_2)
{
    void **ptr;

    ptr = NULL;

    ptr = malloc(sizeof(char *) * 2);
    ptr[0] = strdup("test");
    ptr[1] = NULL;
    ck_assert_ptr_nonnull(ptr);
    ck_assert_ptr_eq(ptr[0], "test");
    ck_assert_ptr_eq(ptr[1], NULL);
    ft_safeFree(ptr);
} END_TEST;

START_TEST (test_ft_doubrealloc_3)
{
    void **ptr;
    ptr = NULL;

    ptr = malloc(sizeof(char *) * 11);
    for (int i= 0; i < 10; i++)
    {
        ptr[i] = strdup(ft_itoa(i));
    }
    ptr[10] = NULL;
    // check length of double pointer is 10;
    ck_assert_int_eq(10, ft_doublen((const char **)ptr));
    for (int i= 0; i < 10; i++)
    {
        ck_assert_ptr_nonnull(ptr[i]);
        ck_assert_ptr_eq(ptr[i], ft_itoa(i));
    }
    ck_assert_ptr_eq(ptr[10], NULL);
    ft_doubfree(ptr, 0);
}




Suite *ft_doubreallo_suite(void)
{
    Suite *s;

    s = suite_create("ft_doubrealloc");
    TCase *tc_1;
    TCase *tc_2;
    TCase *tc_3;

    tc_1 = tcase_create("test_ft_doubrealloc_1");
    tcase_add_test(tc_1, test_ft_doubrealloc_1);
    suite_add_tcase(s, tc_1);
    
    tc_2 = tcase_create("test_ft_doubrealloc_2");
    tcase_add_test(tc_2, test_ft_doubrealloc_2);
    suite_add_tcase(s, tc_2);
    
    tc_3 = tcase_create("test_ft_doubrealloc_3");
    tcase_add_test(tc_3, test_ft_doubrealloc_3);
    suite_add_tcase(s, tc_3);
    
    return (s);
}
