/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:54:51 by despanad          #+#    #+#             */
/*   Updated: 2024/07/04 23:10:04 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stddef.h>

char	*ft_strdup(char *str);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(char *str, char *to_find, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_memove(void *dest, void *src, size_t n);
int		ft_isascii(int param);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalpha(char c);
int		ft_isprint(int param);
int		ft_atoi(char *nptr);
int		ft_tolower(int str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_toupper(int str);
int		ft_memcmp(void *s1, void *s2, size_t n);
char	*ft_strchr(const char *str, int c);
int		ft_isdigit(int c);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t nb);
void	ft_bzero(void *s, int n);
int		ft_isalnum(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
