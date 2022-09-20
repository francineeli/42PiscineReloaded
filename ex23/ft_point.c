/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:47:24 by feli-bar          #+#    #+#             */
/*   Updated: 2022/08/29 14:52:24 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point -> x = 42;
	point -> y = 21;
}


int	main(void)
{
	t_point point;

	set_point(&point);
	printf("%d, %d\n", point.x, point.y);
	return(0);
}