/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:33:21 by feli-bar          #+#    #+#             */
/*   Updated: 2022/08/25 21:44:14 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb > 0 && nb < 13)
		return (nb = nb * ft_recursive_factorial(nb - 1));
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (0);
}
