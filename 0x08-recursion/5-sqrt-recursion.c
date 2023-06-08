#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n.
 *         -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    return sqrt_helper(n, 0, n);
}

/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The number to find the square root of.
 * @low: The lower bound of the search range.
 * @high: The upper bound of the search range.
 *
 * Return: The natural square root of n.
 *         -1 if n does not have a natural square root.
 */
int sqrt_helper(int n, int low, int high)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (mid * mid == n)
        return mid;
    else if (mid * mid > n)
        return sqrt_helper(n, low, mid - 1);
    else
        return sqrt_helper(n, mid + 1, high);
}

