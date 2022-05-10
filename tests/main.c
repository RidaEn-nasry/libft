/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:19:18 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/05/10 12:32:08 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

t_suites *suites;


Suite *getSuite(char *name)
{
    
    t_suites *tmp = suites;
    
    while (tmp)
    {
        if (strcmp(tmp->name, name) == 0)
            return (tmp->suite());
        tmp = tmp->next;
    }
   
    printf(" %s: suite Not found\n", name);
    exit(EXIT_FAILURE);
}


t_suites *init_data(void)
{
    
    suites = malloc(sizeof(*suites));
    suites->name = "dr";
    suites->suite = ft_doubreallo_suite;
    suites->next = NULL;
    return (suites);
}




int main(int argc, char **argv)
{
    
    suites = init_data();
    int number_failed;
    
    (void)argc;
    if (!argv[1])
    {
        printf("Usage: ./test_runner <suite_name>\n");
        return 1;
    }
    Suite *s;
    SRunner *sr;
    s  = getSuite(argv[1]);
    sr = srunner_create(s);
    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
