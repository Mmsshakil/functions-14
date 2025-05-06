#include <stdio.h>

void sum(int x, int y) // here i made the function named sum and use void to say that this function will not return any value
{
    int ans = x + y;
    printf("%d", ans);
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    sum(m, n); // here i just call the function 

    return 0;
}