/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isPrime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:57:53 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/04/26 18:09:26 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isPrime.c is a function that checks if a number is prime or not. 
// by checking if the number is divisible by any number between 2 and the number divided by 2 . */


#include "libft.h"

long int    ft_isPrime(long int n) {
    long int i;

    if (n <= 1) {
        return 0;
    }
    i = 2;
    while (i  <= n / 2) {
        if (n % i == 0) {
            return 0;
        }
        i++;
    }
    return 1;
}