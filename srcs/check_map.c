#include "cub3D.h"

void	check_texture(t_map_info *map_info)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!map_info->texture.walls[i])
			exit_error("texture error\n");
	}
	// if (!item)
		// exit_error("item error\n");
	i = 0;
	while (i < 3)
	{
		if (!floor[i] || !ceil[i])
			exit_error("texture error\n");
	}
}

void	check_map(t_map_info *map_info)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		if (map)
	}
}


void	check_map(t_map_info *map_info)
{
	//	check map_info error
	check_texture(map_info);
}