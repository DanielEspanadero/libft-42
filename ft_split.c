/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:20:06 by despanad          #+#    #+#             */
/*   Updated: 2024/07/11 22:44:42 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
{
	int	cwords;

	cwords = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s == c)
		{
			cwords++;
			while (*s == c)
				s++;
		}
		else
			s++;
	}
	cwords++;
	return (cwords);
}

static void	ft_free(char **memory, size_t aux)
{
	size_t	i;

	i = 0;
	while (i < aux)
	{
		free(memory[i]);
		i++;
	}
	free(memory);
}

static void	split_str(char **ptr, char *str, char c, char nwords)
{
	int		i;
	char	*aux;

	i = 0;
	while (i < nwords && *str)
	{
		aux = ft_strchr(str, c);
		if (aux == NULL)
		{
			ptr[i] = ft_strdup(str);
			if (ptr[i] == NULL)
			{
				ft_free(ptr, i);
				return ;
			}
			break ;
		}
		ptr[i] = ft_substr(str, 0, aux - str);
		if (ptr[i] == NULL)
		{
			ft_free(ptr, i);
			return ;
		}
		i++;
		str = aux + 1;
		while (*str == c)
			str++;
	}
	ptr[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**ptr;
	char	*str;
	char	a[2];

	a[0] = c;
	a[1] = '\0';
	if (s)
	{
		str = ft_strtrim(s, a);
		if (str)
		{
			nwords = count_words(str, c);
			ptr = (char **)calloc((nwords + 1), sizeof(char *));
			if (ptr)
				split_str(ptr, str, c, nwords);
			free(str);
			return (ptr);
		}
	}
	return (NULL);
}
