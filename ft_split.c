/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:20:06 by despanad          #+#    #+#             */
/*   Updated: 2024/07/10 20:37:34 by despanad         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	
}
