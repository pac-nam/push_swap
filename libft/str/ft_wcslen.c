/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcslen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 15:40:16 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/06 17:55:18 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

size_t		ft_wcslen(wchar_t *str)
{
	size_t		i;

	i = 0;
	while (str[i] != L'\0')
		++i;
	return (i);
}