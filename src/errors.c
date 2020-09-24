/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 11:48:35 by alromero          #+#    #+#             */
/*   Updated: 2020/09/24 22:58:05 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		error(char *s)
{
	write(1, "Error:\n", 8);
	write(1, s, ft_strlen(s));
	write(1, "                   \n", 21);
	exit_game();
	return (0);
}

void	check_map_errors(int flag, int flag2)
{
	if (flag > 0)
	{
		write(1, "Error:\n", 8);
		write(1, "bad map                    \n", 29);
		exit_game();
	}
	if (flag2 > 1)
	{
		write(1, "Error:\n", 8);
		write(1, "too many positions         \n", 29);
		exit_game();
	}
	if (flag2 == 0)
	{
		write(1, "Error:\n", 8);
		write(1, "no position                \n", 29);
		exit_game();
	}
}
