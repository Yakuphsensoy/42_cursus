/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:34:15 by yasensoy          #+#    #+#             */
/*   Updated: 2022/12/06 14:31:29 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen((char *)src);
	i = 0;
	if (n <= d)
	{
		return (n + s);
	}
	while (src[i] != '\0' && d + i + 1 < n)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}

// #include <stdio.h>

// int main()
// {
// 	char *dest = "Merhaba";
// 	char *src = "42Kocaeli";

// 	printf("%zu",ft_strlcat(dest,src,4));
// }

// dst dizisinin son karakteri null'dan sonra 
// src dizisini ekliyor. dst'den n kadar ilerler.
