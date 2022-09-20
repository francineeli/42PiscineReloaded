/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:44:08 by feli-bar          #+#    #+#             */
/*   Updated: 2022/08/25 19:00:08 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	a;
	int	v;

	if (argc > 1)
	{
		a = 1;
		while (a < argc)
		{
			v = 0;
			while (argv[a][v])
			{
				ft_putchar(argv[a][v]);
				v++;
			}
			ft_putchar('\n');
		a++;
		}
	}
	return (0);
}
