#include <stdio.h>

int sum(int x, int y) // here i made the function named sum
{
    int ans = x + y;
    return ans;
}

int main()
{
    int m = 5, n = 2;

    int final = sum(m, n); // here i call the function

    printf("%d", final);

    return 0;
}