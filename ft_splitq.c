/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitq.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:23:56 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/04/28 12:56:38 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/* ft_splitq is a function which seperates given string using delimiter c except for sections between quotes.
 */ 

static int	count_words(const char *str, char c)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}


char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
        if (s[i] == '"' || s[i] == '\'')
        {
            char q  = s[i] == '"' ? '"' : '\'';
            int k = i + 1;
            while (s[k] && s[k] != q)
            {
                k++;
            }
           if (k != ft_strlen(s))
           {
               split[j++] = word_dup(s, i, k + 1);
               i = k + 1;
           }
            
        }
		if (s[i] != c && index < 0)
		{
			index = i;
		}
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
        
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
