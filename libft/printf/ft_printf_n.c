/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:27:21 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/06 18:24:51 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int		ft_printf_n(va_list ap, int count)
{
	int		*ptr;

	ptr = va_arg(ap, int*);
	*ptr = count;
	return (1);
}