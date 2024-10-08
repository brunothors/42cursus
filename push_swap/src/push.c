/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnespoli <bnespoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:35:33 by bnespoli          #+#    #+#             */
/*   Updated: 2024/09/10 17:55:47 by bnespoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_node(t_stack stk[2], int flag);

void	push(t_stack stk[2], int flags, int times)
{
	if (!times)
		return ;
	if (flags == A && stk[B].len > 0)
	{
		push_node(stk, A);
		ft_putendl_fd("pa", STDOUT_FILENO);
	}
	else if (flags == B && stk[A].len > 0)
	{
		push_node(stk, B);
		ft_putendl_fd("pb", STDOUT_FILENO);
	}
	push(stk, flags, --times);
}

static void	push_node(t_stack stk[2], int dest)
{
	t_dbnode	*temp;
	int			orig;

	orig = (dest == A) * B + (dest == B) * A;
	temp = stk[orig].head;
	stk[orig].head = stk[orig].head->next;
	if (stk[orig].head)
		stk[orig].head->prev = NULL;
	stk[orig].len--;
	temp->next = stk[dest].head;
	temp->prev = NULL;
	if (stk[dest].head)
		stk[dest].head->prev = temp;
	stk[dest].head = temp;
	stk[dest].len++;
	if (stk[dest].len == 1)
		stk[dest].tail = stk[dest].head;
}
