/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroels <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:28:50 by mroels            #+#    #+#             */
/*   Updated: 2024/07/15 14:36:24 by mroels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	strlcat(char *dst, const char *src, size_t size)
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
	strlcpy(s1, s2, sz);
	return (0);
}*/
