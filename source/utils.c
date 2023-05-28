#include "../include/sueca.h"

int check_double(int* arr, int n)
{
    int i = 0;

    while (arr[i])
    {
        if (arr[i] == n)
            return 0;
        i++;
    }
    return 1;
}

void    print_arr(int* arr)
{
    int i;

    for (i = 0; i < 40; i++)
        printf("%d\n", arr[i]);
}

void    arrncpy(int* src, int* dest, int min, int max)
{
    int i = 0;
    int j = 0;
	int count = (min - 1);

    while (count <= max)
    {
        if (src[i] >= min || src[i] < max)
        {
            dest[j] = src[i];
            j++;
			count++;
        }
        i++;
    }
}

int arr_len(int* arr)
{
    int i = 0;
    while (arr[i + 1])
        i++;
    return (i);
}