/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:20:06 by despanad          #+#    #+#             */
/*   Updated: 2024/07/10 20:31:34 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
{
	int	cwords;

	cwords = 0;
	if (!*s)
		return 0;
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
	return cwords;
}

char	**ft_split(char const *s, char c)
{
	
}
