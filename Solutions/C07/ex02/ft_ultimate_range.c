/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:14:15 by hmesrar           #+#    #+#             */
/*   Updated: 2022/08/06 15:51:05 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tmp;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	tmp = malloc(sizeof(int) * size);
	if (!tmp)
	{
		*range = 0;
		return (-1);
	}
	*range = tmp;
	while (i < size)
	{
		tmp[i] = min + i;
		i++;
	}
	return (size);
}
