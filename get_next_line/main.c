/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnespoli <bnespoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:30:54 by bnespoli          #+#    #+#             */
/*   Updated: 2023/12/08 15:53:14 by bnespoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*t;
	int		lines;

	fd = open("test.txt", O_RDONLY);
	t = NULL;
	lines = 1;

	while ((t = get_next_line(fd)) != NULL)
	{
		printf("%d -> %s", lines++, t);
		free(t);
	}
	close(fd);
}
