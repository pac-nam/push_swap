/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 11:30:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/23 17:40:15 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static char	*ft_second_double_sort(int **a, int **b, char **str, int ref)
{
	int		target;
	int		target_index;

	if (!(*a)[0])
		return (*str);
	target = ft_target(*a, ref);
	target_index = ft_index_of_nb(*a, target);
	if (target_index > (*a)[0] / 2 + 1)
		while ((*a)[1] != target)
			ft_reverse_rotate(a, str, "rra\n");
	else
		while ((*a)[1] != target)
			ft_rotate(a, str, "ra\n");
	ft_push(b, a, str, "pb\n");
	if ((*b)[1] < (*b)[2])
		ft_rotate(b, str, "rb\n");
	return (ft_second_double_sort(a, b, str, ref));
}

char		*ft_double_sort(int *pile_a)
{
	int		ref;
	int		ref_index;
	int		*pile_b;
	char	*str;

	if (!(ref = ft_median(pile_a, &ref)) || !(str = malloc(1)) ||
			!(pile_b = (int*)malloc(sizeof(int) * (pile_a[0] + 1))))
		return (0);
	*str = '\0';
	*pile_b = 0;
	ref_index = ft_index_of_nb(pile_a, ref);
	if (ref_index < pile_a[0] / 2 + 1)
		while (pile_a[1] != ref)
			ft_rotate(&pile_a, &str, "ra\n");
	else
		while (pile_a[1] != ref)
			ft_reverse_rotate(&pile_a, &str, "rra\n");
	ft_push(&pile_b, &pile_a, &str, "pb\n");
	if (!(str = ft_second_double_sort(&pile_a, &pile_b, &str, ref)))
		return (NULL);
	while (pile_b[0])
		ft_push(&pile_a, &pile_b, &str, "pa\n");
	free(pile_b);
	return (str);
}
