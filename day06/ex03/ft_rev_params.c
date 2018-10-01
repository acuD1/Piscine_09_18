/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:22:25 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/04 14:46:44 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac > 1)
	{
		while (i < ac)
			i++;
		i--;
		while (i >= 1)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
