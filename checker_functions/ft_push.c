/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:41:51 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/28 16:22:49 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_push(int **put_on, int **pick_one)
{
	int		nb;
	int		index;

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
	return (1);
}
