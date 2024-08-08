/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroels <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:59:09 by mroels            #+#    #+#             */
/*   Updated: 2024/08/07 14:53:42 by maxencero        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	szsrc;
	size_t	i;

	i = 0;
	szsrc = 0;
	while (src[szsrc])
		szsrc++;
	if (size > szsrc)
		size = szsrc;
	while (i < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (szsrc);
}

/*int	main(void)
{
	char	s1[5] = "Mort";
	char	s2[4] = "Vie";
	size_t	sz = 2;
	ft_strlcpy(s1, s2, sz);
	return (0);
}*/
