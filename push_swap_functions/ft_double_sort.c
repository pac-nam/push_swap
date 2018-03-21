/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 11:30:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/21 13:51:27 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	ft_find_median(int *a)
{
	int		*cpy;
	int		i;
	int		tmp;

	if (!(cpy = (int*)malloc(a[0] + 1)))
	   exit(1);
	i = -1;
	while (++i <= a[0])
		cpy[i] = a[i];	
	i = -1;
	while (++i < cpy[0])
		if (cpy[i] > cpy[i + 1])
		{
			tmp = cpy[i];
			cpy[i] = cpy[i + 1];
			cpy[i + 1] = tmp;
			i = 0;
		}
	i = cpy[cpy[0] / 2 + 1];
	ft_memdel((void**)&cpy);
	return (i);
}

static int	ft_second_double_sort(int **a, int **b, char **str, int ref)
{
	int		target;
	int		target_index;

	if (!(*b)[0])
		return (1);
	target = ft_target(*b, ref);
	target_index = ft_index_of_nb(*b, target);
	if (target_index > (*b)[0] / 2 + 1)
	{
		while ((*b)[1] != target)
			ft_reverse_rotate(b, str, "rrb\n");
	}
	else
		while ((*b)[1] != target)
			ft_rotate(b, str, "rb\n");
	ft_push(a, b, str, "pa\n");
	if ((*a)[1] > (*a)[2])
		ft_rotate(a, str, "ra\n");
	return (ft_second_double_sort(a, b, str, ref));
}

char		*ft_double_sort(int *a)
{
	int		ref;
	int		*b;
	char	*str;

	if (!ft_init_pile_b(&b, a[0] + 1) || (!(str = (char*)malloc(1))))
			return (0);
	*str = '\0';
	ref = ft_find_median(a);
	printf ("median = %d\n", ref);
	while (a[0] > 1)
	{
		if (a[1] == ref)
			ft_rotate(&a, &str, "ra\n");
		ft_push(&b, &a, &str, "pb\n");
		printf("%d|%d|%d|%d|%d|%d|%d|%d|%d\n",
				a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
	}
	if (!ft_second_double_sort(&a, &b, &str, ref))
		return (0);
	ft_memdel((void**)&b);
	return (str);
}
