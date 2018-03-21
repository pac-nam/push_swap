/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_pile_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 11:58:44 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/21 12:39:38 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int			ft_init_pile_b(int **b, int size)
{
	CHECK((*b = (int*)malloc(size)));
	(*b)[0]  = 0;
	return (1);
}