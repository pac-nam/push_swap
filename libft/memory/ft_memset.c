/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:41:46 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/06 16:30:53 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b2;
	size_t			i;

	b2 = b;
	i = 0;
	while (i < len)
		b2[i++] = (unsigned char)c;
	return (b);
}
