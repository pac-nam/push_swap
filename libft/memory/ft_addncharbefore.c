/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addncharbefore.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 15:59:51 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/21 16:08:45 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../header/str.h"

int			ft_addncharbefore(int n, char c, char **str)
{
	char		*tmp;
	int			i;
	int			len;

	if (!str || !(*str))
		return (0);
	i = 0;
	if (n < 1)
		return (1);
	len = ft_strlen(*str);
	tmp = *str;
	if (!(*str = malloc(len + n + 1)))
		return (0);
	(*str)[len + n] = '\0';
	while (i < n)
		(*str)[i++] = c;
	n = 0;
	while (len--)
		(*str)[i++] = tmp[n++];
	ft_strdel(&tmp);
	return (1);
}
