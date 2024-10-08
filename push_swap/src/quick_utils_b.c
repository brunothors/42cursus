/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_utils_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnespoli <bnespoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:26:43 by bnespoli          #+#    #+#             */
/*   Updated: 2024/09/10 19:45:00 by bnespoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	min_bottom(t_stack stk[2], int nbr[3]);
static void	min_top(t_stack stk[2], int nbr[3]);
static void	min_middle(t_stack stk[2], int nbr[3]);

void	conquer_three_b(t_stack stk[2])
{
	int			nbr[3];

	nbr[0] = stk[B].head->nbr;
	nbr[1] = stk[B].head->next->nbr;
	nbr[2] = stk[B].head->next->next->nbr;
	if (nbr[2] < nbr[0] && nbr[2] < nbr[1])
		min_bottom(stk, nbr);
	else if (nbr[0] < nbr[1] && nbr[0] < nbr[2])
		min_top(stk, nbr);
	else
		min_middle(stk, nbr);
}

static void	min_bottom(t_stack stk[2], int nbr[3])
{
	if (nbr[0] < nbr[1])
		swap(stk, B);
	push(stk, A, 3);
}

static void	min_top(t_stack stk[2], int nbr[3])
{
	swap(stk, B);
	push(stk, A, 1);
	swap(stk, B);
	push(stk, A, 1);
	if (nbr[1] < nbr[2])
		swap(stk, A);
	push(stk, A, 1);
}

static void	min_middle(t_stack stk[2], int nbr[3])
{
	push(stk, A, 1);
	swap(stk, B);
	push(stk, A, 1);
	if (nbr[0] < nbr[2])
		swap(stk, A);
	push(stk, A, 1);
}
