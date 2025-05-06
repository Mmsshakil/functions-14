#include <stdio.h>

void sum() // here i made the function named sum and use void to say that this function will not return any value
{
    int m, n;
    scanf("%d %d", &m, &n);
    int ans = m + n;
    printf("%d", ans);
}

int main()
{

    sum(); // here i just call the function

    return 0;
}