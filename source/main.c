#include "../include/sueca.h"

int main()
{
    t_table table;

    table.deck = deck_init();
    printf ("DECK = \n");
    print_arr(table.deck, CARD_SIZE);
    table.trumps = trump_init(table.deck, &table);
    printf("TRUMPS = \n");
    print_arr(table.trumps, TRUMP_SIZE);
    printf("\nplayer_1 status and hand: %d\n", table.player_1.status);
    print_arr(table.player_1.hand, HAND_SIZE);
    printf("\nplayer_2 status and hand: %d\n", table.player_2.status);
    print_arr(table.player_2.hand, HAND_SIZE);
    printf("\nplayer_3 status and hand: %d\n", table.player_3.status);
    print_arr(table.player_3.hand, HAND_SIZE);
    printf("\nplayer_4 status and hand: %d\n", table.player_4.status);
    print_arr(table.player_4.hand, HAND_SIZE);
}
