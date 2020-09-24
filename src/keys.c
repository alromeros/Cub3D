/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 11:48:56 by alromero          #+#    #+#             */
/*   Updated: 2020/09/24 22:59:30 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		key_press(int key, t_params *p)
{
	if (key == KEY_W)
		p->key.w = 1;
	if (key == KEY_S)
		p->key.s = 1;
	if (key == KEY_D)
		p->key.d = 1;
	if (key == KEY_A)
		p->key.a = 1;
	if (key == RIGHT)
		p->key.right = 1;
	if (key == LEFT)
		p->key.left = 1;
	if (key == UP)
		p->key.up = 1;
	if (key == DOWN)
		p->key.down = 1;
	else if (key == ESC)
		exit_game();
	return (0);
}

int		key_unpress(int key, t_params *p)
{
	if (key == KEY_W)
		p->key.w = 0;
	if (key == KEY_S)
		p->key.s = 0;
	if (key == KEY_D)
		p->key.d = 0;
	if (key == KEY_A)
		p->key.a = 0;
	if (key == RIGHT)
		p->key.right = 0;
	if (key == LEFT)
		p->key.left = 0;
	if (key == UP)
		p->key.up = 0;
	if (key == DOWN)
		p->key.down = 0;
	return (0);
}

int		press_key(t_params *p)
{
	p->movespeed = 0.15;
	p->rotspeed = 0.09;
	move_frontback(p);
	rotate_rigth(p);
	rotate_left(p);
	move_leftrigth(p);
	raycasting(p);
	return (0);
}
