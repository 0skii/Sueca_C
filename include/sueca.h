#ifndef SUECA_H
# define SUECA_H

# define WINDOW_WIDTH 1240
# define WINDOW_HEIGHT 720

# define TRUE 1
# define FALSE 0

# define DESTROY_NOTIFY 17

# include "../mlx_linux/mlx.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <time.h>
# include <X11/keysym.h>

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		height;
	int     width;
}			t_data;

typedef struct s_player {
	int		hand[10];
	int		status;
	char*	name;
}			t_player;

typedef struct s_table {
	int	deck[40];
	int flop[4];
	int	trumps[10];
	int	team_pts[2];
}		t_table;

int*	deck_init(int* arr);
void    print_arr(int* arr);
int		check_double(int* arr, int n);
int*	trump_init(int* trumps, int* deck);
void    arrncpy(int* src, int* dest, int min, int max);
int		arr_len(int* arr);

#endif