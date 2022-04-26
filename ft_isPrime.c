/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isPrime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:57:53 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/04/26 16:01:28 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/*
ft_isPrime.c is a function that checks if a number is prime or not. 
by checking if the number is divisible by any number between 2 and the number divided by 2 . */

int ft_isPrime(size_t ing n) {
    size_t i;
    
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