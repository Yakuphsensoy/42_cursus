/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:26:58 by yasensoy          #+#    #+#             */
/*   Updated: 2023/01/20 16:13:30 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;	

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < len && haystack[i + j] == needle[j])
			{
				j++;
				if (!needle[j])
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	char hstack[] = "Merhaba42Kocaeli";
// 	char needle[] = "42";

// 	printf("%s",ft_strnstr(hstack,needle,10));
// }

// needle(iğne)'yi haystack(samanlık)'da len kadar arar 
// bulduğu zaman devamını da döndürür.
