/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnespoli <bnespoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:27:38 by bnespoli          #+#    #+#             */
/*   Updated: 2024/05/11 19:51:08 by bnespoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static t_data	*ft_pointer_game(void)
{
	static t_data	game;

	return (&game);
}

static void	check_args(const char *argv, char *str)
{
	int	len_arg;
	int	len_str;

	len_arg = (int)ft_strlen(argv);
	len_str = (int)ft_strlen(str);
	while (len_str >= 0)
	{
		if (argv[len_arg] != str[len_str])
		{
			ft_printf("Error. Invalid file extension.\n");
			exit(EXIT_FAILURE);
		}
		len_arg--;
		len_str--;
	}
}

int32_t	main(int argc, char **argv)
{
	t_data	*game;

	if (argc != 2)
	{
		ft_printf("Error. Invalid quantity of arguments.\n");
		exit(EXIT_FAILURE);
	}
	check_args(argv[1], ".ber");
	game = ft_pointer_game();
	init_vars (game);
	build_matrix(game, argv[1]);
	init_game(game);
	free_end_game(game);
	return (EXIT_SUCCESS);
}
