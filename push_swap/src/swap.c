/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnespoli <bnespoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:53:53 by bnespoli          #+#    #+#             */
/*   Updated: 2024/09/10 17:54:12 by bnespoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_number(t_dbnode *node);

void	swap(t_stack stacks[2], int flag)
{
	if ((flag == A && stacks[A].len < 2) || (flag == B && stacks[B].len < 2))
		return ;
	if (stacks[flag].len > 1)
	{
		swap_number(stacks[flag].head);
		if (flag == A)
			ft_putendl_fd("sa", STDOUT_FILENO);
		else
			ft_putendl_fd("sb", STDOUT_FILENO);
	}
	if (flag == BOTH && (stacks[A].len > 1 && stacks[B].len > 1))
	{
		swap_number(stacks[A].head);
		swap_number(stacks[B].head);
		ft_putendl_fd("ss", STDOUT_FILENO);
	}
}

static void	swap_number(t_dbnode *node)
{
	int	swap;

	swap = node->nbr;
	node->nbr = node->next->nbr;
	node->next->nbr = swap;
}
