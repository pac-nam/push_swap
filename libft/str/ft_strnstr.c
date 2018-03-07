/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:56:44 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/06 17:01:23 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			save;

	i = 0;
	j = 0;
	save = 0;
	if (!needle[0] && len > 0)
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i] == needle[j] && i < len)
		{
			if (!needle[j + 1])
				return ((char*)&haystack[save]);
			++i;
			++j;
		}
		i = ++save;
		j = 0;
	}
	return (NULL);
}
