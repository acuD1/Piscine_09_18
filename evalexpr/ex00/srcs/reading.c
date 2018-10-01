/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:20:28 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:34:55 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

t_stack	*create_stack_node(int value)
{
	t_stack	*tmp;

	tmp = malloc(sizeof(t_stack));
	if (tmp)
	{
		tmp->nbr = value;
		tmp->next = NULL;
	}
	return (tmp);
}

void	add_node_to_stack(t_stack *stack_head, t_stack *new_node)
{
	t_stack	*ptr_stack;

	ptr_stack = stack_head;
	while (ptr_stack->next != NULL)
	{
		ptr_stack = ptr_stack->next;
	}
	ptr_stack->next = new_node;
}

t_stack	*use_operator(t_stack *ptr_stack, t_node *ptr_rpn)
{
	if (ptr_rpn->fct == '*')
		ptr_stack->nbr = ptr_stack->nbr * ptr_stack->next->nbr;
	if (ptr_rpn->fct == '/')
		ptr_stack->nbr = ptr_stack->nbr / ptr_stack->next->nbr;
	if (ptr_rpn->fct == '%')
		ptr_stack->nbr = ptr_stack->nbr % ptr_stack->next->nbr;
	if (ptr_rpn->fct == '+')
		ptr_stack->nbr = ptr_stack->nbr + ptr_stack->next->nbr;
	if (ptr_rpn->fct == '-')
		ptr_stack->nbr = ptr_stack->nbr - ptr_stack->next->nbr;
	return (ptr_stack);
}

void	handle_stack(t_stack *ptr_stack, t_node *ptr_rpn, t_stack *stack_head)
{
	t_stack	*new_node;

	if (ptr_rpn->flag == 1)
	{
		new_node = create_stack_node(ptr_rpn->nbr);
		add_node_to_stack(stack_head, new_node);
	}
	else if (ptr_rpn->flag == 0)
	{
		ptr_stack = stack_head;
		while (ptr_stack->next->next != NULL)
			ptr_stack = ptr_stack->next;
		use_operator(ptr_stack, ptr_rpn);
		free(ptr_stack->next);
		ptr_stack->next = NULL;
	}
}

int		read_rpn(t_node *rpn)
{
	int		result;
	t_node	*ptr_rpn;
	t_stack *stack_head;
	t_stack *ptr_stack;

	result = 0;
	ptr_rpn = rpn;
	stack_head = create_stack_node(rpn->nbr);
	ptr_stack = stack_head;
	ptr_rpn = ptr_rpn->next;
	while (ptr_rpn != NULL)
	{
		handle_stack(ptr_stack, ptr_rpn, stack_head);
		ptr_rpn = ptr_rpn->next;
	}
	result = stack_head->nbr;
	free(stack_head);
	return (result);
}
