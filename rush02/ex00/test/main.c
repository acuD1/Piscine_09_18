/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 11:36:44 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/02 08:36:32 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

int		ft_atoi(char *str)
{
	int	i;
	int	nb;
	int neg;

	i = 0;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += (str[i] - 48);
		i++;
	}
	if (neg == 1)
		return (-nb);
	else
		return (nb);
}

int		main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	rush(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}
