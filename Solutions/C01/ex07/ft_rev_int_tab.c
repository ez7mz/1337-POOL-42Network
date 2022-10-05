/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 03:47:38 by hmesrar           #+#    #+#             */
/*   Updated: 2022/07/24 06:03:04 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = size - 1;
	while (j > i)
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		j--;
		i++;
	}
}
