/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcslen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 01:24:22 by seliasbe          #+#    #+#             */
/*   Updated: 2017/11/01 01:24:23 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_wcslen(const wchar_t *s)
{
	int		i;
	int		len;

	i = -1;
	len = 0;
	while (s[++i])
		len += ft_wclen(s[i]);
	return (len);
}
