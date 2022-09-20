/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:55:17 by feli-bar          #+#    #+#             */
/*   Updated: 2022/08/30 18:53:09 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	diff;
	int	*size;

	diff = max - min;
	if (min >= max)
		return (0x0);
	size = (int *) malloc(sizeof(int) * (diff - 1));
	count = 0;
	while (count < diff)
	{
		size[count] = min + count;
		count++;
	}
	return (size);
}	
