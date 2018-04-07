#include <stdio.h>

int main (void)
{
    int n , triangularNumber;
    triangularNumber = 0;

    for ( n = 1 ; n <= 200 ; n = n + 1 )
    {
    triangularNumber = triangularNumber + n;
    printf("%-2i %i\n", n, triangularNumber);
    }

    return 0;
}
// Программа выводит число и треугольное число.
// Прошлая программа dsdjlbkf "The 200th triangular number is" и треугольное число.
