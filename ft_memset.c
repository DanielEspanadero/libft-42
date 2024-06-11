/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:56:47 by despanad          #+#    #+#             */
/*   Updated: 2024/06/11 23:12:21 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = ptr;
	while (i < n)
	{
		s[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}
