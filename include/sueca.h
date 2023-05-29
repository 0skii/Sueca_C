#ifndef SUECA_H
# define SUECA_H

# define WINDOW_WIDTH 1240
# define WINDOW_HEIGHT 720

# define TRUE 1
# define FALSE 0

# define TOP 1
# define BOTTOM 2

# define CARD_SIZE 40
# define TRUMP_SIZE 10
# define HAND_SIZE 10

# define ALL_PLAYERS 5

# define DESTROY_NOTIFY 17

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <time.h>

typedef struct s_player {
	int*    hand;
	int		status;
	char*	name;
}			t_player;

typedef struct s_table {
	t_player	player_1;
	t_player	player_2;
	t_player	player_3;
	t_player	player_4;
	int*		deck;
	int*		flop;
	int*		trumps;
	int*		team_pts;
}		t_table;

int*    deck_init();
void    print_arr(int* arr, int arr_size);
int		check_double(int* arr, int n);
int*   	trump_init(int* deck, t_table *table);
void    arrncpy(int* dest, int min, int max);
int		arr_len(int* arr);
void    give_cards(int top_or_bottom, t_table *table);
void    status_on(int player_nbr, t_table *table);

#endif