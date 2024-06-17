#ifndef LIBFT_H
# define LIBFT_H

#import <unistd.h>
#import <stdlib.h>
#import <fcntl.h>
#import <stddef.h>

// Declarations from ft_strlcpy.c

// Declarations from ft_strlcat.c

// Declarations from ft_toupper.c

// Declarations from ft_tolower.c

// Declarations from ft_strrchr.c

// Declarations from ft_strncmp.c

// Declarations from ft_memchr.c

// Declarations from ft_memcmp.c

// Declarations from ft_strnstr.c

// Declarations from ft_atoi.c

// Declarations from ft_isalnum.c
int	ft_isalnum(char c);
// Declarations from ft_isalpha.c
int	ft_isalpha(char c);
// Declarations from ft_isprint.c
int	ft_isprint(int c);
// Declarations from ft_strlen.c
int	ft_strlen(char *str);
// Declarations from ft_memcpy.c
void	*ft_memcpy(void *dest, const void *src, size_t n);
// Declarations from ft_isascii.c
int	ft_isascii(int c);
// Declarations from ft_memmove.c
void	*memmove(void *dest, const void *src, size_t n);
// Declarations from ft_strchr.c
char	*strchr(const char *s, int c);
// Declarations from ft_bzero.c
void	bzero(void *s, size_t n);
// Declarations from ft_isdigit.c
int	ft_isdigit(char c);
// Declarations from ft_memset.c
void	*ft_memset(void *ptr, int c, size_t n);

#endif
