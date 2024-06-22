/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 19:57:39 by despanad          #+#    #+#             */
/*   Updated: 2024/06/22 20:05:54 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;
	
	i = 0;
	str = (unsigned char *) s;
	to_find = (unsigned char) c;
	while (i < n)
	{
		if(str[i] == to_find)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
