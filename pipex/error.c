#include "pipex.h"

int	manage_error(t_pipy	*my_var, int argc, char **argv)
{
	if (argc != 5)
		return (0);
	if (argv[1][0] != '1')
		my_var->infile = open(argv[1], O_RDONLY);
	if (argv[4][0] != '1')
		my_var->outfile = open(argv[4], O_RDWR);
	if ((my_var->infile == -1) || (my_var->outfile == -1))
		return (0);
	if ((argv[2][0] == '\0') || (argv[3][0] == '\0'))
		return (0);
	return (1);
}