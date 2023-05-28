#include "../include/sueca.h"

int main()
{
    t_table table;

    table.deck = deck_init();
    printf ("DECK = \n");
    print_arr(table.deck, CARD_SIZE);
    table.trumps = trump_init(table.deck);
    printf("\nTRUMPS = \n");
    print_arr(table.trumps, TRUMP_SIZE);
}
