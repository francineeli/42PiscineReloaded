/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:58:36 by feli-bar          #+#    #+#             */
/*   Updated: 2022/08/25 19:57:52 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>

char	ft_strcpy(char *dest, char *src)
{
	int	tam;

	tam = 0;
	while (src[tam] != '\0')
	{
		dest[tam] = src[tam];
		tam++;
	}
	dest[tam] = '\0';
	return (*dest);
}

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = (char *) malloc (sizeof (src));
	if (dst == NULL)
		return (0x0);
	ft_strcpy(dst, src);
	return (dst);
}
