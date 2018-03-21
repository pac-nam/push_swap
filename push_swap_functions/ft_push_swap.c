/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 11:30:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/21 12:44:45 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

//	ft_printf("a[0] = %d | a[1] = %d | a[2] = %d | a[3] = %d\n", stock->ref[0], stock->ref[1], stock->ref[2], stock->ref[3]);

int			ft_push_swap(int *a)
{
	char	*str;

	if (!(str = ft_double_sort(a)))
		return (0);
	ft_putstr(str);
	ft_strdel(&str);
	return (0);
}
