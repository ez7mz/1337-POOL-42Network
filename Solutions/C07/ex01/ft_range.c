/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:56:29 by hmesrar           #+#    #+#             */
/*   Updated: 2022/08/06 15:46:12 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	if (min < max)
	{
		size = max - min;
		tab = malloc(sizeof(int) * size);
		while (i < size)
		{
			tab[i] = min + i;
			i++;
		}
	}
	else
	{
		tab = 0;
	}
	return (tab);
}
