/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 20:38:17 by despanad          #+#    #+#             */
/*   Updated: 2024/06/29 19:51:19 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	char	a;

	a = c;
	while (*str)
	{
		if (*str == a)
			return ((char *) str);
		str++;
	}
	if (a == '\0')
		return ((char *) str);
	return (0);
}
