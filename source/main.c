#include "../include/sueca.h"

int main()
{
    t_table table;

	deck_init(table.deck);
    print_arr(trump_init(table.trumps, table.deck));
}