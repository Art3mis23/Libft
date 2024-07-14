/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroels <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:59:09 by mroels            #+#    #+#             */
/*   Updated: 2024/07/14 14:22:27 by mroels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	szsrc;

	szsrc = 0;
	while (src++)
		szsrc++;
	if (size > szsrc)
		size = szsrc;
	while (i++ < size)
		dst[i] = src[i];
	dst[i] = '\0';
	return (szsrc);
}
