/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:04:33 by yasensoy          #+#    #+#             */
/*   Updated: 2022/12/06 13:16:12 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < (n - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen (src));
}

// #include <stdio.h>

// int main()
// {
// 	char dest[] = "Merhaba";
// 	char src[] = "42Kocaeli";

// 	printf("%zu",ft_strlcpy(dest,src,4));
// }

// Fonksiyon paremetresinde girilen n değeri kadar 
// src'yi dest'e kopyalar. ve src uzunluğunu döndürür.
