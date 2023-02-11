/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:12:37 by yasensoy          #+#    #+#             */
/*   Updated: 2023/02/11 15:12:39 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*(str++) == (unsigned char )c)
			return ((void *)(str - 1));
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	char *s = "Yakup Şensoy";
// 	printf("%c", (char *)ft_memchr(s,'u',8));
// }

/* s dizisinde c parametresine girilen değeri bulana kadar indexlerde gezer 
 * ve c parametresini bulunca adresini döndürür. 
 * n değeri kadar arama yapar. */
