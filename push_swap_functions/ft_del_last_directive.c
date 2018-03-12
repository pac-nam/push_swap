/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_last_directive.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 11:47:11 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/12 13:57:34 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int		ft_del_last_directive(char **str)
{
	int		len;
	int		i;
	char	*tmp;

	tmp = *str;
	len = ft_strlen(*str) - 2;
	while (len != '\n' && len)
		--len;
	++len;
	if (!(*str = (char*)malloc(len + 1)))
		return (0);
	(*str)[len] = '\0';
	i = -1;
	while (++i < len)
		(*str)[i] = tmp[i];
	ft_strdel(&tmp);
	return (1);
}
