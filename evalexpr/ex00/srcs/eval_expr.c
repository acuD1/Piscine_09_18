/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:14:01 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:34:49 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

t_node	*infix_to_postfix(t_node *list, char *str, int id)
{
	char stk[4096];

	stk[id] = '\0';
	while (*str)
	{
		if ((*str >= '0' && *str <= '9') ||
				(*str == '-' && str[1] >= '0' && str[1] <= '9'))
			list = add_node(list, 1, ft_atoi(&str), 0);
		else if (*str == ' ')
			str++;
		else if (*str == '*' || *str == '%' || *str == '/')
			list = mult_d(list, &str, stk, &id);
		else if (*str == '+' || *str == '-')
			list = add_s(list, &str, stk, &id);
		else
			list = parsupp(list, &str, stk, &id);
	}
	while (id > 0)
	{
		list = add_node(list, 0, 0, stk[id]);
		stk[id--] = 0;
	}
	return (list);
}

int		eval_expr(char *str)
{
	t_node	*list;
	int		result;

	result = 0;
	list = infix_to_postfix(NULL, str, 0);
	result = read_rpn(list);
	destroy_list(list);
	return (result);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
