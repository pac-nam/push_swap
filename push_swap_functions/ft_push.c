/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:41:51 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/07 12:32:05 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int		ft_push(int **put_on, int **pick_one, char **instructions, char *str)
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
	strtmp = *instructions;
	if (!(*instructions = ft_strjoin(*instructions, str)))
		return (0);
	ft_strdel(&strtmp);
	return (1);
}
