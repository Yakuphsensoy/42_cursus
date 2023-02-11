/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:52:28 by yasensoy          #+#    #+#             */
/*   Updated: 2022/12/26 21:12:02 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *) ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// #include <stdio.h>

// char	ft_42(unsigned int a,char c)
// {
// 	return(ft_toupper(c));
// }

// int main()
// {
// 	char s[] = "merhaba";
// 	char *str;
// 	str = ft_strmapi(s,ft_42);

// 	printf("%s",str);
// }

// calloc ile bellekte yer açılır ve 
// s dizisinin her indexine parametredeki fonksiyon uygulanır.
