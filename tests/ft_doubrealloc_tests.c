/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doubrealloc_tests.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:19:29 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/05/10 13:37:16 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft_tests.h"

START_TEST (test_ft_doubrealloc_1)
{
    void **ptr;

    ptr = NULL;
    ptr = ft_doubrealloc(ptr, 1);
    ck_assert_ptr_eq(ptr, NULL);

} END_TEST;


START_TEST (test_ft_doubrealloc_2)
{
    void **ptr;

    ptr = NULL;

    ptr = malloc(sizeof(char *) * 2);
    ptr[0] = strdup("test");
    ptr[1] = NULL;
    ptr = ft_doubrealloc(ptr, 3);
    ck_assert_ptr_nonnull(ptr);
    ptr[1] = strdup("test2");
    ck_assert_str_eq(ptr[0], "test");
    ck_assert_str_eq(ptr[1], "test2");
    ck_assert_ptr_nonnull(ptr[2]);
    ck_assert_ptr_eq(ptr[3], NULL);
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
    ptr = ft_doubrealloc(ptr, 20);
    ck_assert_ptr_nonnull(ptr);
    // checking first 10 bytes are populated with i.
    for (int i= 0; i < 10; i++)
    {
        ck_assert_str_eq(ptr[i], ft_itoa(i));
    }
    // checking last 10 bytes are allocated.
    
    // check last byte is NULL.
    ck_assert_ptr_eq(ptr[20], NULL);
    // fill the last 10 bytes with i.
    for (int i = 10; i < 20; i++)
    {
        ptr[i] = strdup(ft_itoa(i));
    }
    // check length is now 20.
    ck_assert_int_eq(ft_doublen((const char **)ptr), 20);
    // check length of double pointer is 10;
    
    ft_doubfree(ptr, 0);
} END_TEST;




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
