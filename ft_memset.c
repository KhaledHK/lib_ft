/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhaled <khkhaled@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-12 12:54:18 by khkhaled          #+#    #+#             */
/*   Updated: 2024-06-12 12:54:18 by khkhaled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char*)(s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
