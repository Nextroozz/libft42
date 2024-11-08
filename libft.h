/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:08:51 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/06 15:08:54 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int				ft_atoi(char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(char c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strlen(const char *str);
void			*ft_memset(void *dest, int c, size_t count);
void			ft_bzero(void *s, size_t n);
size_t			ft_strlcpy(char *dest, const char *src, size_t n);
size_t			ft_strlcat(char *dest, const char *src, size_t nb);
char			*ft_strchr(char *str, int c);
void			*ft_memchr(const void *memoryBlock, int c, size_t size);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strrchr(char *str, int c);
int				ft_memcmp(const void *p1, const void *p2, size_t size);
char			*ft_strnstr(const char *s1, const char *s2, size_t size);
void			*ft_calloc(size_t elementCount, size_t elementsize);
char			*ft_strdup(const char *s);

#endif
