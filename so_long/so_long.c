/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:37:21 by socana-b          #+#    #+#             */
/*   Updated: 2022/04/18 14:37:25 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_Var	var;
	t_Valid	valid;

	if (!valid_map(argc, argv, &valid, &var))
	{
		return (0);
	}
	var.exit_bool = valid.obj;
	create_window(&var);
	return (0);
}
