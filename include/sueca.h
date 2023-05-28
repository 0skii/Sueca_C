#ifndef SUECA_H
# define SUECA_H

# define WINDOW_WIDTH 1240
# define WINDOW_HEIGHT 720

# define TRUE 1
# define FALSE 0

# define CARD_SIZE 40
# define TRUMP_SIZE 10

# define DESTROY_NOTIFY 17

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <time.h>

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
	int*	deck;
	int 	flop[4];
	int*	trumps;
	int		team_pts[2];
}		t_table;

int*    deck_init();
void    print_arr(int* arr, int arr_size);
int		check_double(int* arr, int n);
int*   	trump_init(int* deck);
void    arrncpy(int* dest, int min, int max);
int		arr_len(int* arr);

#endif