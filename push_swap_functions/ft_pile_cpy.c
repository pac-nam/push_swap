/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pile_cpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:56:12 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/23 15:01:38 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int		*ft_pile_cpy(int *pile)
{
	int		*cpy;
	int		i;

	if (!(cpy = (int*)malloc(sizeof(int) * (pile[0] + 1))))
		return (NULL);
	i = -1;
	while (++i <= pile[0])
		cpy[i] = pile[i];
	return (cpy);
}
