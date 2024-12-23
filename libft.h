/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:08:51 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/11 15:56:01 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(char *nptr);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(char c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strlen(const char *s);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t siz);
size_t			ft_strlcat(char *dst, const char *src, size_t siz);
char			*ft_strchr(char *s, int c);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strrchr(char *s, int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_itoa(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);

#endif
