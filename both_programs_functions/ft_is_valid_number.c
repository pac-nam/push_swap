/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/23 13:54:30 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "../header/checker.h"

int		ft_isnumber(char *str)
{
	int			i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] && !ft_strchr(" \n\t\f\r\v", str[i]))
	{
		if (!ft_isdigit(str[i]))
			return (0);
		++i;
	}
	return (1);
}

int		ft_is_valid_number(char *str, int *opt)
{
	int			i;
	long long	nb;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] && !ft_strchr(" \n\t\f\r\v", str[i]))
	{
		if (!ft_isdigit(str[i]))
			return (ft_error(opt[2], "wrong character in the number list\n"));
		++i;
	}
	if (i >= 10)
	{
		if (i > 12)
			return (ft_error(opt[2], "a number is not an int\n"));
		nb = ft_atoll(str);
		ft_printf("|%lld|\n", nb);
		if (nb > INT_MAX || nb < INT_MIN)
			return (ft_error(opt[2], "a number is not an int\n"));
	}
	return (1);
}
