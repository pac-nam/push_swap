/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:41:51 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/21 13:43:24 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int		ft_push(int **put_on, int **pick_one, char **str, char *to_add)
{
	int		nb;
	int		index;
	char	*strtmp;

	index = 0;
	if ((*pick_one)[0] == 0)
		return (1);
	nb = (*pick_one)[1];
	while (++index < (*pick_one)[0])
		(*pick_one)[index] = (*pick_one)[index + 1];
	--((*pick_one)[0]);
	index = (*put_on)[0] + 2;
	while (--index > 1)
		(*put_on)[index] = (*put_on)[index - 1];
	++((*put_on)[0]);
	(*put_on)[1] = nb;
	strtmp = *str;
	if (!(*str = ft_strjoin(*str, to_add)))
		exit(1);
	ft_strdel(&strtmp);
	return (1);
}
