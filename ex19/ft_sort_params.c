/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:44:08 by feli-bar          #+#    #+#             */
/*   Updated: 2022/08/28 20:49:47 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp( char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_print_result(int t, char **result);

int	ft_strcmp(char *s1, char *s2)
{
	int	tam;

	tam = 0;
	while (s1[tam] == s2[tam] && s1[tam] != '\0' && s2[tam] != '\0')
		tam++;
	return (s1[tam] - s2[tam]);
}	

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		fa;
	char	*exc;

	fa = 1;
	while (fa < argc - 1)
	{
		if (ft_strcmp(argv[fa], argv[fa + 1]) > 0)
		{
			exc = argv[fa + 1];
			argv[fa + 1] = argv[fa];
			argv[fa] = exc;
			fa = 1;
		}
		else
		fa++;
	}
	fa = 1;
	ft_print_result(argc - 1, argv + 1);
}

void	ft_print_result(int tam, char **result)
{
	int	t;

	t = 0;
	while (t < tam)
	{
		ft_putstr(result[t]);
		t++;
		ft_putchar('\n');
	}
}
