/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 22:28:53 by despanad          #+#    #+#             */
/*   Updated: 2024/06/29 20:21:08 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(char *s)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s, size);
	ptr[size] = '\0';
	return (ptr);
}
