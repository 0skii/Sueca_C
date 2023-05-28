#include "../include/sueca.h"

int check_double(int* arr, int n)
{
    int i = 0;

    while (i < CARD_SIZE)
    {
        if (arr[i] == n)
            return 0;
        i++;
    }
    return 1;
}

void    print_arr(int* arr, int arr_size)
{
    int i;

    for (i = 0; i < arr_size; i++)
        printf("%d; ", arr[i]);
}

void    arrncpy(int* dest, int min, int max)
{
    int i = 0;

    while (min < max + 1)
    {
        dest[i] = min++;
        i++;
    }

}
