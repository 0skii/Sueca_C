#include "../include/sueca.h"

int main()
{
    t_table table;

    table.deck = deck_init();
    printf ("DECK = \n");
    print_arr(table.deck, CARD_SIZE);
    table.trumps = trump_init(table.deck);
    printf("TRUMPS = \n");
    print_arr(table.trumps, TRUMP_SIZE);
    give_cards(TOP, &table);
    printf("\nplayer_1 hand: \n");
    print_arr(table.player_1.hand, HAND_SIZE);
    printf("\nplayer_2 hand: \n");
    print_arr(table.player_2.hand, HAND_SIZE);
    printf("\nplayer_3 hand: \n");
    print_arr(table.player_3.hand, HAND_SIZE);
    printf("\nplayer_4 hand: \n");
    print_arr(table.player_4.hand, HAND_SIZE);
}
