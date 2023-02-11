/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:51:51 by yasensoy          #+#    #+#             */
/*   Updated: 2022/12/06 11:51:51 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else if (dst > src)
	{
		while (n--)
			*((unsigned char *)(dst + n)) = *((unsigned char *)(src + n));
	}
	return (dst);
}
// #include <stdio.h>
// int main( void )
// {
//     char src[] = "Bilgisayar";
//     const char dst[] = "Programlar";

//     printf(" %s\n", src, dst);
//     ft_memmove(src, dst, 10);
//     printf("%s\n", src, dst);
//     return 0;
// }
