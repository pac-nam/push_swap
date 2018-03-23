/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:35:32 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/06 17:06:24 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int				i;
	int				j;
	int				save;

	i = 0;
	j = 0;
	save = 0;
	if (!needle[0])
		return ((char*)haystack);
	while (haystack[i])
	{
		while (haystack[i] == needle[j])
		{
			if (!needle[j + 1])
				return ((char*)&haystack[save]);
			i++;
			j++;
		}
		i = ++save;
		j = 0;
	}
	return (NULL);
}
