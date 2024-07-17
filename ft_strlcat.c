/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroels <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:28:50 by mroels            #+#    #+#             */
/*   Updated: 2024/07/17 18:51:14 by mroels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	szsrc;
	size_t	i;

	i = 0;
	szsrc = 0;
	szsrc = ft_strlen(src);
	while (*dst)
		dst++;
	if (size > szsrc)
		size = szsrc;
	while (i < size && src[i])
	{
		*dst++ = src[i];
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
	strlcat(s1, s2, sz);
	return (0);
}*/
