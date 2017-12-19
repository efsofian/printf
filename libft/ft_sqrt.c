/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <seliasbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 20:56:52 by seliasbe          #+#    #+#             */
/*   Updated: 2017/05/24 21:00:02 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i < 46340)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
