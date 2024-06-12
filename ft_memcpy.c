/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:02:37 by despanad          #+#    #+#             */
/*   Updated: 2024/06/12 20:40:57 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned size_t	i;

	i = 0;
	if (src == NULL && dest == NULL)
	{
		return (NULL);
	}
	while (src[i] == n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	dest[i] = '\0';
}
