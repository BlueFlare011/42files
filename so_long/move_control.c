#include "so_long.h"

static int	move_backend(T_Var *var, int x, int y)
{
	int i;
	int	j;

	i = (var->ness_y + y) / 80;
	j = (var->ness_x + x) / 80;
	if (var->map[i][j] != HOLE)
		return (1);
	return (0);
}

void	ft_move_up(T_Var *var)
{
	if (move_backend(var, 0, -80))
	{
		var->ness_y -= 80;
		mlx_put_image_to_window(var->mlx, var->win, var->ness, var->ness_x, var->ness_y);
		mlx_put_image_to_window(var->mlx, var->win, var->floor, var->ness_x, var->ness_y + 80);
	}
	
}

void	ft_move_down(T_Var *var)
{
	if (move_backend(var, 0, 80))
	{
		var->ness_y += 80;
		mlx_put_image_to_window(var->mlx, var->win, var->ness, var->ness_x, var->ness_y);
		mlx_put_image_to_window(var->mlx, var->win, var->floor, var->ness_x, var->ness_y - 80);
	}
	
}

void	ft_move_left(T_Var *var)
{
	if (move_backend(var, -80, 0))
	{
		var->ness_x -= 80;
		mlx_put_image_to_window(var->mlx, var->win, var->ness, var->ness_x, var->ness_y);
		mlx_put_image_to_window(var->mlx, var->win, var->floor, var->ness_x + 80, var->ness_y);
	}
}

void	ft_move_right(T_Var *var)
{
	if (move_backend(var, 80, 0))
	{
		var->ness_x += 80;
		mlx_put_image_to_window(var->mlx, var->win, var->ness, var->ness_x, var->ness_y);
		mlx_put_image_to_window(var->mlx, var->win, var->floor, var->ness_x - 80, var->ness_y);
	}
}
//(var->ness_y - 80 >= 0) && (var->map[(var->ness_y - 80) / 80][var->ness_x / 80] != HOLE)