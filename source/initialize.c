#include "../include/sueca.h"

int*    deck_init(int* deck)
{
    int i = 0;
    int nbr;
    int min = 1;
    int max = 40;
    srand(time(NULL));

    while (i < 40)
    {
        nbr = (rand() % (max - min + 1)) + min;
        if (check_double(deck, nbr) == TRUE)
        {
            deck[i] = nbr;
            i++;
        }
    }
    return (deck);
}

int* trump_init(int* trumps, int* deck)
{
    int trump;
    int decider;
    int min = 1;
    int max = 2;
    srand(time(NULL));

    decider = (rand() % (max - min + 1)) + min;
    if (decider == 1)
    {
        trump = deck[0];
        if (trump <= 10)
            arrncpy(deck, trumps, 1, 10);
        else if (trump > 10 && trump < 21)
            arrncpy(deck, trumps, 11, 20);
        else if (trump > 20 && trump < 31)
            arrncpy(deck, trumps, 21, 30);
        else if (trump > 30 && trump < 41)
            arrncpy(deck, trumps, 31, 40);
    }
    else if (decider == 2)
    {
        trump = deck[arr_len(deck)];
        if (trump <= 10)
            arrncpy(deck, trumps, 1, 10);
        else if (trump > 10 && trump < 21)
            arrncpy(deck, trumps, 11, 20);
        else if (trump > 20 && trump < 31)
            arrncpy(deck, trumps, 21, 30);
        else if (trump > 30 && trump < 41)
            arrncpy(deck, trumps, 31, 40);
    }
    return trumps;
}
