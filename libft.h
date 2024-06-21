/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:54:51 by despanad          #+#    #+#             */
/*   Updated: 2024/06/21 19:32:10 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#import <unistd.h>
#import <stdlib.h>
#import <fcntl.h>
#import <stddef.h>

char	*ft_strdup(char *str);
char	*ft_strrchr(char *str, int c);
char	*ft_strnstr(char *str, char *to_find, size_t len);
size_t	ft_strlen(char *str);
char	*str_join(char *s1, char *s2);
void	*memove(void *dest, void *src, size_t n);
int	ft_isascii(int param);
char	*ft_substr(char *s, size_t start, size_t len);
void	*ft_calloc(size_t nmemb, size_t size);
int	ft_isalpha(int param);
int	ft_isprint(int param);
int	ft_atoi(char *str);
int	ft_tolower(int str);
int	ft_strncmp(char *s1, char *s2, size_t n);
int	ft_toupper(int str);
int	ft_memcmp(void *s1, void *s2, size_t n);
char	*ft_strchr(char *str, int c);
int	ft_isdigit(int param);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t nb);
void	ft_bzero(void *s, int n);
int	ft_isalnum(char *str);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);

#endif
