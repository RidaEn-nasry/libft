/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:00:55 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/05/15 10:35:50 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
** String manipulation
*/

size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *s1);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s, const char *set);
char				**ft_split(char const *s, char c);
// char 				**ft_splitq(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strnstr(const char *haystack, \
						const char *needle, size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
char				*ft_strstr(const char *heystack, const char *needle);

char				*ft_strtok(char *str, const char *delim);
int					*ft_isspace(char c);
char				**ft_doubtrim(char **doub, char *set);
int					*ft_stcount(const char *s, char c);
size_t				ft_doublen(const char **doub);
char				*ft_getnextS(char *s);
char				*ft_doubconcat(char **doub, char *s);
char				*ft_lineinsert(char *line, char *content, \
													size_t start, size_t end);

/*
** MEMORY MANIIPULATION
*/

void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_realloc(void *ptr, size_t size);
void				ft_sfree(void *ptr);
void				ft_doubfree(void **doub, size_t size);
void				**ft_doubrealloc(void **doub, size_t size);


/*
** FILE DESCRIPTORS MANIPULATION
*/
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char const *s, int fd);

/*
** LINKED LISTS MANIPULATION
*/

t_list				*ft_lstnew(void *content);
void				ft_lstdelone(t_list *alst, void (*del)(void *));
void				ft_lstadd_back(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_front(t_list **alst, t_list *new);


/* 
**	Math functions
*/
long int			ft_isPrime(long int n);

/* 
**	error handling
*/

int					exitIF(int condition, char *message);

/*
** Miscelaneous functions
*/

void				*ft_ternary(int condition, void *true_value, \
						void *false_value);						
int					ft_intternary(int condition, int true_value, \
						int false_value);
char				*ft_getenv(char **env, char *var);
bool				ft_envexist(char **env, char *var);
/* 
** files manipulation
*/
bool				ft_validfname(char *name);

#endif
