/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:44:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/06 18:33:57 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int		ft_printnchar(int nb, char c)
{
	char		*str;
	int			nb2;

	if (nb < 1)
		return (0);
	if (!(str = (char*)malloc(nb + 1)))
		return (0);
	nb2 = nb;
	str[nb--] = '\0';
	while (nb >= 0)
		str[nb--] = c;
	write(1, str, nb2);
	ft_strdel(&str);
	return (nb2);
}
