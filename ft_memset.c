/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceroels <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 00:25:09 by maxencero         #+#    #+#             */
/*   Updated: 2024/07/03 01:13:43 by mroels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t len)
{
	while (len--)
		((unsigned char*)s)[len] = (unsigned char)c;
	return (s);
}

/*int	main(void)
{
	char	string[5] = "Hell";
	int	chat = 69;
	size_t	lenght = 2;
	ft_memset(string, chat, lenght);
	return (0);
}*/
