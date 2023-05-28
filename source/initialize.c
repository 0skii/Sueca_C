#include "../include/sueca.h"

int*    deck_init()
{
    int     *deck;
    int     i = 0;
    int     nbr;
    int     min = 1;
    int     max = CARD_SIZE;
    srand(time(NULL));

    deck = malloc(sizeof(int) * CARD_SIZE);
    while (i < CARD_SIZE)
    {
        nbr = (rand() % (max - min + 1)) + min;
        if (check_double(deck, nbr) == TRUE)
        {
            deck[i] = nbr;
            i++;
        }
    }
    return deck;
}

int*   trump_init(int* deck)
{
    int     trump;
    int*    trumps;
    int     decider;
    int     min = 1;
    int     max = 2;
    srand(time(NULL));

    decider = (rand() % (max - min + 1)) + min;
    trumps = malloc(sizeof(int) * TRUMP_SIZE);
    if (decider == 1)
        trump = deck[0];
    else if (decider == 2)
        trump = deck[CARD_SIZE - 1];
    if (trump <= 10)
        arrncpy(trumps, 1, 10);
    else if (trump > 10 && trump < 21)
        arrncpy(trumps, 11, 20);
    else if (trump > 20 && trump < 31)
        arrncpy(trumps, 21, 30);
    else if (trump > 30 && trump < 41)
        arrncpy(trumps, 31, 40);
    return trumps;
}
